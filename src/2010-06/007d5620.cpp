// roc 2010-06 007d5620  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5620
//
// 007d5620  51                   push ecx
// 007d5621  8b01                 mov eax, dword ptr [ecx]
// 007d5623  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 007d5629  56                   push esi
// 007d562a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d562e  56                   push esi
// 007d562f  c744240800000000     mov dword ptr [esp + 8], 0
// 007d5637  ffd2                 call edx
// 007d5639  8bc6                 mov eax, esi
// 007d563b  5e                   pop esi
// 007d563c  59                   pop ecx
// 007d563d  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPReportGroupRow_Batch@ns_ROCX00002b@@QAEHH@Z)

namespace ns_ROCX00002b {
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
