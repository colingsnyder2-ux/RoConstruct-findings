// roc 2010-06 0052cde0  unit: RBX::VTextureProxyBase::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052cde0
//
// 0052cde0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052cde3  85c9                 test ecx, ecx
// 0052cde5  7409                 je 0x52cdf0
// 0052cde7  8b01                 mov eax, dword ptr [ecx]
// 0052cde9  8b5010               mov edx, dword ptr [eax + 0x10]
// 0052cdec  6a01                 push 1
// 0052cdee  ffd2                 call edx
// 0052cdf0  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct S
{
    void f();
};

void S::f()
{
    struct VTable
    {
        void *unused[4];
        void (__thiscall *release)(void *, int);
    };

    void *p = *(void **)((char *)this + 0x0c);
    if (p != 0)
        ((VTable *)*(void **)p)->release(p, 1);
}
}
