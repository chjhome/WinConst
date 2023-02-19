#define WIN32_LEAN_AND_MEAN
#include <windows.h> // for ARRAYSIZE

#include "..\itc\InterpretConst.h"

#include "democonst.h"

namespace itc {

const Const2Val_st Demo1Sec1[] =
{
	{ _T("SEC1_VAL0"), 0 },
	{ _T("SEC1_VAL1"), 1 },
	{ _T("SEC1_VAL2"), 2 },
	{ _T("SEC1_VAL3"), 3 },
};
const Const2Val_st Demo1Sec2[] =
{
	{ _T("SEC2_VAL0"), 0<<2 },
	{ _T("SEC2_VAL1"), 1<<2 },
	{ _T("SEC2_VAL2"), 2<<2 },
	{ nullptr, 3<<2 },
	{ _T("SEC2_VAL4"), 4<<2 },
	{ _T("SEC2_VAL5"), 5<<2 },
	{ _T("SEC2_VAL6"), 6<<2 },
	//	{ _T("SEC2_VAL7"), 7<<2 },
};

const ConstSection_st ar_Demo1CS[] =
{
	{ 0x3, Demo1Sec1, ARRAYSIZE(Demo1Sec1) },
	{ 0x7<<2, Demo1Sec2, ARRAYSIZE(Demo1Sec2) },
};

CInterpretConst itc1(ar_Demo1CS, ARRAYSIZE(ar_Demo1CS));

////

const Enum2Val_st e2v_weekday[] =
{
	{_T("Sunday"), 0},
	{_T("Monday"), 1},
	{_T("Tuesday"), 2},
	{_T("Wednesday"), 3},
	{_T("Thursday"), 4},
	{_T("Friday"), 5},
	{_T("Saturday"), 6},
};
CInterpretConst weekday(e2v_weekday);


} // namespace itc {
