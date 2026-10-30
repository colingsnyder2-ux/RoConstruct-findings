// roc 2011-06 00923080  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00923080
//
// 00923080  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00923083  85c9                 test ecx, ecx
// 00923085  7409                 je 0x923090
// 00923087  8b01                 mov eax, dword ptr [ecx]
// 00923089  8b5010               mov edx, dword ptr [eax + 0x10]
// 0092308c  6a01                 push 1
// 0092308e  ffd2                 call edx
// 00923090  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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