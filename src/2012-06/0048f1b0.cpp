// roc 2012-06 0048f1b0  unit: CRobloxReportPaneView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048f1b0
//
// 0048f1b0  83ec14               sub esp, 0x14
// 0048f1b3  8d442404             lea eax, [esp + 4]
// 0048f1b7  50                   push eax
// 0048f1b8  ff158022b200         call dword ptr [0xb22280]
// 0048f1be  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0048f1c3  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 0048f1c8  8bc8                 mov ecx, eax
// 0048f1ca  c1e104               shl ecx, 4
// 0048f1cd  2bc8                 sub ecx, eax
// 0048f1cf  8d048a               lea eax, [edx + ecx*4]
// 0048f1d2  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 0048f1d7  8bc8                 mov ecx, eax
// 0048f1d9  c1e104               shl ecx, 4
// 0048f1dc  2bc8                 sub ecx, eax
// 0048f1de  03c9                 add ecx, ecx
// 0048f1e0  03c9                 add ecx, ecx
// 0048f1e2  890c24               mov dword ptr [esp], ecx
// 0048f1e5  db0424               fild dword ptr [esp]
// 0048f1e8  891424               mov dword ptr [esp], edx
// 0048f1eb  db0424               fild dword ptr [esp]
// 0048f1ee  d80d90d7b500         fmul dword ptr [0xb5d790]
// 0048f1f4  dec1                 faddp st(1)
// 0048f1f6  83c414               add esp, 0x14
// 0048f1f9  c3                   ret 
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