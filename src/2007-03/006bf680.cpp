// roc 2007-03 006bf680  unit: seg_006b0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bf680
//
// 006bf680  51                   push ecx
// 006bf681  8b01                 mov eax, dword ptr [ecx]
// 006bf683  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 006bf689  56                   push esi
// 006bf68a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bf68e  56                   push esi
// 006bf68f  c744240800000000     mov dword ptr [esp + 8], 0
// 006bf697  ffd2                 call edx
// 006bf699  8bc6                 mov eax, esi
// 006bf69b  5e                   pop esi
// 006bf69c  59                   pop ecx
// 006bf69d  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPReportGroupRow_Batch@ns_ROCX000038@@QAEHH@Z)

namespace ns_ROCX000038 {
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
