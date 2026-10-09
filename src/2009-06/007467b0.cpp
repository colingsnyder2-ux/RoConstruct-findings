// roc 2009-06 007467b0  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007467b0
//
// 007467b0  51                   push ecx
// 007467b1  8b01                 mov eax, dword ptr [ecx]
// 007467b3  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 007467b9  56                   push esi
// 007467ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007467be  56                   push esi
// 007467bf  c744240800000000     mov dword ptr [esp + 8], 0
// 007467c7  ffd2                 call edx
// 007467c9  8bc6                 mov eax, esi
// 007467cb  5e                   pop esi
// 007467cc  59                   pop ecx
// 007467cd  c20400               ret 4
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
