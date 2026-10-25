// from server: 100% by atomic.potato
// roc 2008-06 0048ee50  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ee50
//
// 0048ee50  56                   push esi
// 0048ee51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0048ee54  56                   push esi
// 0048ee55  e816c90c00           call 0x55b770
// 0048ee5a  83c404               add esp, 4
// 0048ee5d  85f6                 test esi, esi
// 0048ee5f  740c                 je 0x48ee6d
// 0048ee61  8b4610               mov eax, dword ptr [esi + 0x10]
// 0048ee64  8b10                 mov edx, dword ptr [eax]
// 0048ee66  8d4e10               lea ecx, [esi + 0x10]
// 0048ee69  6a01                 push 1
// 0048ee6b  ffd2                 call edx
// 0048ee6d  5e                   pop esi
// 0048ee6e  c3                   ret 

extern "C" void __cdecl SignalDesc(void *);

struct S
{
    char pad[12];
    void *value;

    void f();
};

void S::f()
{
    void *p = value;
    SignalDesc(p);
    if (p)
    {
        void **v = *(void ***)((char *)p + 16);
        ((void (__thiscall *)(void *, int))v[0])((char *)p + 16, 1);
    }
}
