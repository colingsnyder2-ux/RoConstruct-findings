// roc 2011-06 0047f4e0  unit: CRobloxReportPaneView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047f4e0
//
// 0047f4e0  83ec14               sub esp, 0x14
// 0047f4e3  8d442404             lea eax, [esp + 4]
// 0047f4e7  50                   push eax
// 0047f4e8  ff15ec02a400         call dword ptr [0xa402ec]
// 0047f4ee  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0047f4f3  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 0047f4f8  8bc8                 mov ecx, eax
// 0047f4fa  c1e104               shl ecx, 4
// 0047f4fd  2bc8                 sub ecx, eax
// 0047f4ff  8d048a               lea eax, [edx + ecx*4]
// 0047f502  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 0047f507  8bc8                 mov ecx, eax
// 0047f509  c1e104               shl ecx, 4
// 0047f50c  2bc8                 sub ecx, eax
// 0047f50e  03c9                 add ecx, ecx
// 0047f510  03c9                 add ecx, ecx
// 0047f512  890c24               mov dword ptr [esp], ecx
// 0047f515  db0424               fild dword ptr [esp]
// 0047f518  891424               mov dword ptr [esp], edx
// 0047f51b  db0424               fild dword ptr [esp]
// 0047f51e  d80d1019a700         fmul dword ptr [0xa71910]
// 0047f524  dec1                 faddp st(1)
// 0047f526  83c414               add esp, 0x14
// 0047f529  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00455d70@@YANXZ)

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