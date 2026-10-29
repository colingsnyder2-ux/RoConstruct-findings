// roc 2009-12 0045bb40  unit: CRobloxReportPaneView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045bb40
//
// 0045bb40  83ec14               sub esp, 0x14
// 0045bb43  8d442404             lea eax, [esp + 4]
// 0045bb47  50                   push eax
// 0045bb48  ff158cb29800         call dword ptr [0x98b28c]
// 0045bb4e  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0045bb53  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 0045bb58  8bc8                 mov ecx, eax
// 0045bb5a  c1e104               shl ecx, 4
// 0045bb5d  2bc8                 sub ecx, eax
// 0045bb5f  8d048a               lea eax, [edx + ecx*4]
// 0045bb62  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 0045bb67  8bc8                 mov ecx, eax
// 0045bb69  c1e104               shl ecx, 4
// 0045bb6c  2bc8                 sub ecx, eax
// 0045bb6e  03c9                 add ecx, ecx
// 0045bb70  03c9                 add ecx, ecx
// 0045bb72  890c24               mov dword ptr [esp], ecx
// 0045bb75  db0424               fild dword ptr [esp]
// 0045bb78  891424               mov dword ptr [esp], edx
// 0045bb7b  db0424               fild dword ptr [esp]
// 0045bb7e  d80dc4d49a00         fmul dword ptr [0x9ad4c4]
// 0045bb84  dec1                 faddp st(1)
// 0045bb86  83c414               add esp, 0x14
// 0045bb89  c3                   ret 
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