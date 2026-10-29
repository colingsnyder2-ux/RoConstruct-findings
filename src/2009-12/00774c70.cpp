// roc 2009-12 00774c70  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774c70
//
// 00774c70  803da887b90000       cmp byte ptr [0xb987a8], 0
// 00774c77  7417                 je 0x774c90
// 00774c79  80790c00             cmp byte ptr [ecx + 0xc], 0
// 00774c7d  7411                 je 0x774c90
// 00774c7f  ff1598cc9800         call dword ptr [0x98cc98]
// 00774c85  83f801               cmp eax, 1
// 00774c88  7e06                 jle 0x774c90
// 00774c8a  b801000000           mov eax, 1
// 00774c8f  c3                   ret 
// 00774c90  33c0                 xor eax, eax
// 00774c92  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
// from server: 100% by atomic.potato
extern "C" int __declspec(dllimport) __cdecl omp_get_max_threads();

struct S
{
    int f();
};

int S::f()
{
    extern unsigned char g;
    if (g && *((unsigned char*)this + 0x0c) &&
        omp_get_max_threads() > 1)
        return 1;
    return 0;
}
}
