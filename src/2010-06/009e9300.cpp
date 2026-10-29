// roc 2010-06 009e9300  unit: seg_009e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9300
//
// 009e9300  a15ccac200           mov eax, dword ptr [0xc2ca5c]
// 009e9305  85c0                 test eax, eax
// 009e9307  7408                 je 0x9e9311
// 009e9309  50                   push eax
// 009e930a  ff15f0b89e00         call dword ptr [0x9eb8f0]
// 009e9310  59                   pop ecx
// 009e9311  c3                   ret 
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
