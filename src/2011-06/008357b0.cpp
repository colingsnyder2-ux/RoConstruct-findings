// roc 2011-06 008357b0  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008357b0
//
// 008357b0  51                   push ecx
// 008357b1  8b01                 mov eax, dword ptr [ecx]
// 008357b3  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 008357b9  56                   push esi
// 008357ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008357be  56                   push esi
// 008357bf  c744240800000000     mov dword ptr [esp + 8], 0
// 008357c7  ffd2                 call edx
// 008357c9  8bc6                 mov eax, esi
// 008357cb  5e                   pop esi
// 008357cc  59                   pop ecx
// 008357cd  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPReportGroupRow_Batch@ns_ROCX000014@@QAEHH@Z)

namespace ns_ROCX000014 {
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
