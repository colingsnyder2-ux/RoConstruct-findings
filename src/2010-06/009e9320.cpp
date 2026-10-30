// roc 2010-06 009e9320  unit: seg_009e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9320
//
// 009e9320  a180cac200           mov eax, dword ptr [0xc2ca80]
// 009e9325  85c0                 test eax, eax
// 009e9327  7408                 je 0x9e9331
// 009e9329  50                   push eax
// 009e932a  ff15f0b89e00         call dword ptr [0x9eb8f0]
// 009e9330  59                   pop ecx
// 009e9331  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000002_0097ee50@ns_ROCX000002@@YAXXZ)

namespace ns_ROCX000002 {
extern void (__cdecl *deallocBytes)(void*);

extern void* g_00b7cd28;

void fn_ROCX000002_0097ee50()
{
    if (g_00b7cd28)
        deallocBytes(g_00b7cd28);
}
}
