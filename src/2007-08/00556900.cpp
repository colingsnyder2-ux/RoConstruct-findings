// from server: 77% by colin
// roc 2007-08 00556900  unit: RBX::TextDisplay  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00556900
//
// 00556900  56                   push esi
// 00556901  57                   push edi
// 00556902  8bf9                 mov edi, ecx
// 00556904  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 0055690a  85c9                 test ecx, ecx
// 0055690c  7407                 je 0x556915
// 0055690e  8b01                 mov eax, dword ptr [ecx]
// 00556910  8b5044               mov edx, dword ptr [eax + 0x44]
// 00556913  ffd2                 call edx
// 00556915  c787ec00000000000000 mov dword ptr [edi + 0xec], 0
// 0055691f  8bb7f0000000         mov esi, dword ptr [edi + 0xf0]
// 00556925  85f6                 test esi, esi
// 00556927  c787f000000000000000 mov dword ptr [edi + 0xf0], 0
// 00556931  742c                 je 0x55695f
// 00556933  8d4604               lea eax, [esi + 4]
// 00556936  83c9ff               or ecx, 0xffffffff
// 00556939  f00fc108             lock xadd dword ptr [eax], ecx
// 0055693d  7520                 jne 0x55695f
// 0055693f  8b16                 mov edx, dword ptr [esi]
// 00556941  8b4204               mov eax, dword ptr [edx + 4]
// 00556944  8bce                 mov ecx, esi
// 00556946  ffd0                 call eax
// 00556948  8d4e08               lea ecx, [esi + 8]
// 0055694b  83caff               or edx, 0xffffffff
// 0055694e  f00fc111             lock xadd dword ptr [ecx], edx
// 00556952  750b                 jne 0x55695f
// 00556954  8b06                 mov eax, dword ptr [esi]
// 00556956  8b5008               mov edx, dword ptr [eax + 8]
// 00556959  5f                   pop edi
// 0055695a  8bce                 mov ecx, esi
// 0055695c  5e                   pop esi
// 0055695d  ffe2                 jmp edx
// 0055695f  5f                   pop edi
// 00556960  5e                   pop esi
// 00556961  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    volatile long refCount1;
    volatile long refCount2;
};

struct TextDisplay {
    char pad[0xec];
    void* field_ec;
    RefCounted* field_f0;
    void cleanup();
};

void TextDisplay::cleanup()
{
    void* e = field_ec;
    if (e) {
        void** vt = *(void***)e;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x44/4];
        fn(e);
    }
    field_ec = 0;

    RefCounted* p = field_f0;
    field_f0 = 0;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
            void** vt = *(void***)p;
            void (__thiscall *fn)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt[1];
            fn(p);
            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                void** vt2 = *(void***)p;
                void (__thiscall *fn2)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt2[2];
                fn2(p);
            }
        }
    }
}
