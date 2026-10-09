// roc 2008-06 006ce070  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ce070
//
// 006ce070  51                   push ecx
// 006ce071  8b01                 mov eax, dword ptr [ecx]
// 006ce073  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 006ce079  56                   push esi
// 006ce07a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ce07e  56                   push esi
// 006ce07f  c744240800000000     mov dword ptr [esp + 8], 0
// 006ce087  ffd2                 call edx
// 006ce089  8bc6                 mov eax, esi
// 006ce08b  5e                   pop esi
// 006ce08c  59                   pop ecx
// 006ce08d  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPReportGroupRow_Batch@ns_ROCX000002@@QAEHH@Z)

namespace ns_ROCX000002 {
struct CXTPReportGroupRow_Batch
{
    int Method(int);
};

int CXTPReportGroupRow_Batch::Method(int arg)
{
    volatile int pad = 0;
    (*(void (__thiscall **)(CXTPReportGroupRow_Batch *, int))(*(int *)this + 0xfc))(this, arg);
    return arg;
}
}
