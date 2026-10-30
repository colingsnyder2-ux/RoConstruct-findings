// roc 2009-06 00454150  unit: CRobloxReportPaneView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454150
//
// 00454150  83ec14               sub esp, 0x14
// 00454153  8d442404             lea eax, [esp + 4]
// 00454157  50                   push eax
// 00454158  ff1560e28900         call dword ptr [0x89e260]
// 0045415e  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00454163  0fb754240e           movzx edx, word ptr [esp + 0xe]
// 00454168  8bc8                 mov ecx, eax
// 0045416a  c1e104               shl ecx, 4
// 0045416d  2bc8                 sub ecx, eax
// 0045416f  8d048a               lea eax, [edx + ecx*4]
// 00454172  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 00454177  8bc8                 mov ecx, eax
// 00454179  c1e104               shl ecx, 4
// 0045417c  2bc8                 sub ecx, eax
// 0045417e  03c9                 add ecx, ecx
// 00454180  03c9                 add ecx, ecx
// 00454182  890c24               mov dword ptr [esp], ecx
// 00454185  db0424               fild dword ptr [esp]
// 00454188  891424               mov dword ptr [esp], edx
// 0045418b  db0424               fild dword ptr [esp]
// 0045418e  d80dec8f8b00         fmul dword ptr [0x8b8fec]
// 00454194  dec1                 faddp st(1)
// 00454196  83c414               add esp, 0x14
// 00454199  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YANXZ)

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