#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <locale.h>

#include "..\itc\InterpretConst.h"
#include "democonst.h"

using namespace itc;

void test_itc1()
{
	int arVals[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 16, 17, 0xff};
	int i;
	for(i=0; i<ARRAYSIZE(arVals); i++)
	{
		_tprintf(_T("%3d : %s\n"), arVals[i], ITCS(arVals[i], itc1));
	}
/*
  0 : SEC1_VAL0|SEC2_VAL0
  1 : SEC1_VAL1|SEC2_VAL0
  2 : SEC1_VAL2|SEC2_VAL0
  3 : SEC1_VAL3|SEC2_VAL0
  4 : SEC1_VAL0|SEC2_VAL1
  5 : SEC1_VAL1|SEC2_VAL1
  6 : SEC1_VAL2|SEC2_VAL1
  7 : SEC1_VAL3|SEC2_VAL1
  8 : SEC1_VAL0|SEC2_VAL2
  9 : SEC1_VAL1|SEC2_VAL2
 10 : SEC1_VAL2|SEC2_VAL2
 11 : SEC1_VAL3|SEC2_VAL2
 12 : SEC1_VAL0
 16 : SEC1_VAL0|SEC2_VAL4
 17 : SEC1_VAL1|SEC2_VAL4
255 : SEC1_VAL3|0x1C|0xE0
*/
}

void test_itc_enum()
{
	TCHAR buf[80] = {};
	int arVals[] = {0,1,2, 5,6,7};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		itc::weekday.Interpret(arVals[i], DF_NameOnly, buf, ARRAYSIZE(buf));
		_tprintf(_T("%3d : %s\n"), arVals[i], buf);
	}
/*
  0 : Sunday
  1 : Monday
  2 : Tuesday
  5 : Friday
  6 : Saturday
  7 : 7
*/
}

const Bitfield2Val_st b2v_sample1[] =
{
	{_T("bit0"), 1<<0},
	{_T("bit1"), 1<<1},
	{_T("bit2"), 1<<2},
	{_T("bit4"), 1<<4},
	{_T("bit5and6"), 32+64}, // bit 5&6 must both be set to signify this name
};
CInterpretConst BFsample1(b2v_sample1);


void test_itc_bitfields()
{
	TCHAR buf[80] = {};
	int arVals[] = {0,1,2,3,4,5,6,7,8,9, 16,17, 32,64,96};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		BFsample1.Interpret(arVals[i], DF_NameOnly, buf, ARRAYSIZE(buf));
		_tprintf(_T("%3d : %s\n"), arVals[i], buf);
	}
/*
  0 : 0
  1 : bit0
  2 : bit1
  3 : bit0|bit1
  4 : bit2
  5 : bit0|bit2
  6 : bit1|bit2
  7 : bit0|bit1|bit2
  8 : 0x8
  9 : bit0|0x8
 16 : bit4
 17 : bit0|bit4
 32 : 0x20
 64 : 0x40
 96 : bit5and6
*/
}

void test_itc_enum_showval_defaultfmt()
{
	int arVals[] = {0,1,2, 5,6,7};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		_tprintf(_T("%3d : %s\n"), arVals[i], ITCSv(arVals[i], weekday));
	}
/*
  0 : Sunday(0)
  1 : Monday(1)
  2 : Tuesday(2)
  5 : Friday(5)
  6 : Saturday(6)
  7 : 7
*/
}

void test_itc_bitfields_defaultfmt()
{
	int arVals[] = {0,1,2,3,4,5,6,7,8,9, 16,17, 32,64,96};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		_tprintf(_T("%3d : %s\n"), arVals[i], ITCSv(arVals[i], BFsample1));
	}
/*
  0 : 0
  1 : bit0(0x1)
  2 : bit1(0x2)
  3 : bit0(0x1)|bit1(0x2)
  4 : bit2(0x4)
  5 : bit0(0x1)|bit2(0x4)
  6 : bit1(0x2)|bit2(0x4)
  7 : bit0(0x1)|bit1(0x2)|bit2(0x4)
  8 : 0x8
  9 : bit0(0x1)|0x8
 16 : bit4(0x10)
 17 : bit0(0x1)|bit4(0x10)
 32 : 0x20
 64 : 0x40
 96 : bit5and6(0x60)
*/
}

void test_itc_bitfields_customfmt()
{
	CInterpretConst itc_bitfields_customfmt(b2v_sample1, ARRAYSIZE(b2v_sample1), _T("0x%04x"));

	int arVals[] = {0,1,2,3,4,5,6,7,8,9, 16,17, 32,64,96};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		_tprintf(_T("%3d : %s\n"), arVals[i], ITCSv(arVals[i], itc_bitfields_customfmt));
	}
}

#define BIT5AND6 (32+64)

void Test_bad_masks()
{
	const Bitfield2Val_st arBf2V[] =
	{
		ITC_NAMEPAIR(BIT5AND6),

		{_T("bit0"), 1},
		{_T("bit1"), 2},
		{_T("bit1and2"), 6}, 
	};

	CInterpretConst itc_bitfields(arBf2V, ARRAYSIZE(arBf2V));
	TCHAR buf[80] = {};
	int arVals[] = {0,1,2,3,4,5,6,7,8,9, 16,17, 32,64,96};
	for(int i=0; i<ARRAYSIZE(arVals); i++)
	{
		itc_bitfields.Interpret(arVals[i], DF_NameOnly, buf, ARRAYSIZE(buf));
		_tprintf(_T("%3d : %s\n"), arVals[i], buf);
	}
}

void test_itc()
{
	printf("==== Multi-section\n");
	test_itc1();

	printf("==== Enums\n");
	test_itc_enum();

	printf("==== Bitfields\n");
	test_itc_bitfields();

	printf("==== test_itc_enum_showval_defaultfmt()\n");
	test_itc_enum_showval_defaultfmt();

	printf("==== test_itc_bitfields_defaultfmt()\n");
	test_itc_bitfields_defaultfmt();

	printf("==== test_itc_bitfields_customfmt()\n");
	test_itc_bitfields_customfmt();

#ifdef WANT_ASSERT_FALSE
	printf("==== Test_bad_masks\n"); Test_bad_masks(); // This will assert()
#endif
}


int _tmain(int argc, TCHAR* argv[])
{
	test_itc();

	return 0;
}

