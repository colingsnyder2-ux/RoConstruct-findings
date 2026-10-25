// from server: 100% by king_originala
// roc 2008-06 005c3ed0  unit: RBX::Profiling::Profiler  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3ed0
//
// 005c3ed0  56                   push esi
// 005c3ed1  8bf1                 mov esi, ecx
// 005c3ed3  8d8e20c00000         lea ecx, [esi + 0xc020]
// 005c3ed9  c706548c8300         mov dword ptr [esi], 0x838c54
// 005c3edf  ff1568248000         call dword ptr [0x802468]
// 005c3ee5  f644240801           test byte ptr [esp + 8], 1
// 005c3eea  7409                 je 0x5c3ef5
// 005c3eec  56                   push esi
// 005c3eed  e888c70d00           call 0x6a067a
// 005c3ef2  83c404               add esp, 4
// 005c3ef5  8bc6                 mov eax, esi
// 005c3ef7  5e                   pop esi
// 005c3ef8  c20400               ret 4

typedef void (__thiscall *StringDestructor)(void *);

extern StringDestructor destroyString;
extern void *profilerVtable[];
void __cdecl operator delete(void *);

struct Profiler
{
    void **vtable;
    char padding[0xC01C];
    char stringStorage[28];

    Profiler *__thiscall destroy(unsigned int flags);
};

Profiler *__thiscall Profiler::destroy(unsigned int flags)
{
    vtable = profilerVtable;
    destroyString(stringStorage);
    if (flags & 1)
        operator delete(this);
    return this;
}
