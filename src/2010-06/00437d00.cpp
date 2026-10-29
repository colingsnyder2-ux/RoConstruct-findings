// roc 2010-06 00437d00  unit: G3D::VColor3::?$XItem  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00437d00
//
// 00437d00  8b442404             mov eax, dword ptr [esp + 4]
// 00437d04  85c0                 test eax, eax
// 00437d06  7405                 je 0x437d0d
// 00437d08  83c01c               add eax, 0x1c
// 00437d0b  eb02                 jmp 0x437d0f
// 00437d0d  33c0                 xor eax, eax
// 00437d0f  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 00437d15  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00437d18  8b11                 mov edx, dword ptr [ecx]
// 00437d1a  56                   push esi
// 00437d1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00437d1f  56                   push esi
// 00437d20  50                   push eax
// 00437d21  8b4210               mov eax, dword ptr [edx + 0x10]
// 00437d24  ffd0                 call eax
// 00437d26  5e                   pop esi
// 00437d27  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000013@@QAEHPAX0@Z)

namespace ns_ROCX000013 {
struct S
{
    int f(void *, void *);
    void *a[78];
};

int S::f(void *p, void *q)
{
    struct V
    {
        void *v;
    };

    V *x = p ? (V *)((char *)p + 28) : 0;
    void *t = a[78];
    t = *(void **)((char *)t + 28);

    typedef int (__thiscall *F)(void *, V *, void *);
    return ((F)(*(void ***)t)[4])(t, x, q);
}
}
