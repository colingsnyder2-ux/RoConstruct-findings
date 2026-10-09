// roc 2009-12 008215c0  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008215c0
//
// 008215c0  51                   push ecx
// 008215c1  8b01                 mov eax, dword ptr [ecx]
// 008215c3  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 008215c9  56                   push esi
// 008215ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008215ce  56                   push esi
// 008215cf  c744240800000000     mov dword ptr [esp + 8], 0
// 008215d7  ffd2                 call edx
// 008215d9  8bc6                 mov eax, esi
// 008215db  5e                   pop esi
// 008215dc  59                   pop ecx
// 008215dd  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPReportGroupRow_Batch@ns_ROCX00002f@@QAEHH@Z)

namespace ns_ROCX00002f {
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
