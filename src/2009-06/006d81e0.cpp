// roc 2009-06 006d81e0  unit: RBX::MultiJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d81e0
//
// 006d81e0  56                   push esi
// 006d81e1  57                   push edi
// 006d81e2  8bf9                 mov edi, ecx
// 006d81e4  33f6                 xor esi, esi
// 006d81e6  8b07                 mov eax, dword ptr [edi]
// 006d81e8  8b5014               mov edx, dword ptr [eax + 0x14]
// 006d81eb  56                   push esi
// 006d81ec  8bcf                 mov ecx, edi
// 006d81ee  ffd2                 call edx
// 006d81f0  85c0                 test eax, eax
// 006d81f2  7405                 je 0x6d81f9
// 006d81f4  397824               cmp dword ptr [eax + 0x24], edi
// 006d81f7  740b                 je 0x6d8204
// 006d81f9  46                   inc esi
// 006d81fa  83fe02               cmp esi, 2
// 006d81fd  7ce7                 jl 0x6d81e6
// 006d81ff  5f                   pop edi
// 006d8200  32c0                 xor al, al
// 006d8202  5e                   pop esi
// 006d8203  c3                   ret 
// 006d8204  5f                   pop edi
// 006d8205  b001                 mov al, 1
// 006d8207  5e                   pop esi
// 006d8208  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000017@@QAEDXZ)

namespace ns_ROCX000017 {
// from server: 100% by atomic.potato
struct S
{
    struct VTable
    {
        void *p0;
        void *p1;
        void *p2;
        void *p3;
        void *p4;
        void *p5;
    };

    VTable *vtable;
    char f();
};

char S::f()
{
    int i = 0;
    while (i < 2)
    {
        S *p = ((S *(__thiscall *)(S *, int))vtable->p5)(this, i);
        if (p != 0 && *(S **)((char *)p + 0x24) == this)
            return 1;
        ++i;
    }
    return 0;
}
}
