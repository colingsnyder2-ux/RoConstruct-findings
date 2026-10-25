// from server: 100% by tester
// roc 2010-06 004e75a0  unit: RBX::Network::VInterpolatingPhysicsReceiver::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e75a0
//
// 004e75a0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004e75a3  85c9                 test ecx, ecx
// 004e75a5  7409                 je 0x4e75b0
// 004e75a7  8b01                 mov eax, dword ptr [ecx]
// 004e75a9  8b5004               mov edx, dword ptr [eax + 4]
// 004e75ac  6a01                 push 1
// 004e75ae  ffd2                 call edx
// 004e75b0  c3                   ret 

struct S
{
    void f();
};

void S::f()
{
    void **p = *(void ***)((char *)this + 0x0c);
    if (p)
        ((void (__thiscall **)(void *, int))p[0])[1](p, 1);
}
