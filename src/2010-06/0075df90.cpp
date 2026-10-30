// roc 2010-06 0075df90  unit: RBX::MultiJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075df90
//
// 0075df90  56                   push esi
// 0075df91  57                   push edi
// 0075df92  8bf9                 mov edi, ecx
// 0075df94  33f6                 xor esi, esi
// 0075df96  8b07                 mov eax, dword ptr [edi]
// 0075df98  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075df9b  56                   push esi
// 0075df9c  8bcf                 mov ecx, edi
// 0075df9e  ffd2                 call edx
// 0075dfa0  85c0                 test eax, eax
// 0075dfa2  7405                 je 0x75dfa9
// 0075dfa4  397824               cmp dword ptr [eax + 0x24], edi
// 0075dfa7  740b                 je 0x75dfb4
// 0075dfa9  46                   inc esi
// 0075dfaa  83fe02               cmp esi, 2
// 0075dfad  7ce7                 jl 0x75df96
// 0075dfaf  5f                   pop edi
// 0075dfb0  32c0                 xor al, al
// 0075dfb2  5e                   pop esi
// 0075dfb3  c3                   ret 
// 0075dfb4  5f                   pop edi
// 0075dfb5  b001                 mov al, 1
// 0075dfb7  5e                   pop esi
// 0075dfb8  c3                   ret 
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