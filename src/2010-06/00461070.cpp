// roc 2010-06 00461070  unit: CRobloxReportPaneView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461070
//
// 00461070  83ec14               sub esp, 0x14
// 00461073  8d442404             lea eax, [esp + 4]
// 00461077  50                   push eax
// 00461078  ff15dca29e00         call dword ptr [0x9ea2dc]
// 0046107e  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00461083  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 00461088  8bc8                 mov ecx, eax
// 0046108a  c1e104               shl ecx, 4
// 0046108d  2bc8                 sub ecx, eax
// 0046108f  8d048a               lea eax, [edx + ecx*4]
// 00461092  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 00461097  8bc8                 mov ecx, eax
// 00461099  c1e104               shl ecx, 4
// 0046109c  2bc8                 sub ecx, eax
// 0046109e  03c9                 add ecx, ecx
// 004610a0  03c9                 add ecx, ecx
// 004610a2  890c24               mov dword ptr [esp], ecx
// 004610a5  db0424               fild dword ptr [esp]
// 004610a8  891424               mov dword ptr [esp], edx
// 004610ab  db0424               fild dword ptr [esp]
// 004610ae  d80dbce3a000         fmul dword ptr [0xa0e3bc]
// 004610b4  dec1                 faddp st(1)
// 004610b6  83c414               add esp, 0x14
// 004610b9  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00455d70@@YANXZ)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct SYSTEMTIME
{
    unsigned short wYear;
    unsigned short wMonth;
    unsigned short wDayOfWeek;
    unsigned short wDay;
    unsigned short wHour;
    unsigned short wMinute;
    unsigned short wSecond;
    unsigned short wMilliseconds;
};

extern "C" void (__stdcall *GetLocalTime)(SYSTEMTIME*);

double func_00455d70()
{
    SYSTEMTIME time;
    GetLocalTime(&time);
    return (time.wHour * 60 + time.wMinute) * 60
         + time.wMilliseconds * 0.001f;
}