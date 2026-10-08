// from server: 92% by colin
// roc 2007-08 0048e0d0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e0d0
//
// 0048e0d0  56                   push esi
// 0048e0d1  8b742408             mov esi, dword ptr [esp + 8]
// 0048e0d5  85f6                 test esi, esi
// 0048e0d7  742c                 je 0x48e105
// 0048e0d9  8da42400000000       lea esp, [esp]
// 0048e0e0  6a00                 push 0
// 0048e0e2  68044e8800           push 0x884e04
// 0048e0e7  684c1f8800           push 0x881f4c
// 0048e0ec  6a00                 push 0
// 0048e0ee  56                   push esi
// 0048e0ef  e8422c1a00           call 0x630d36
// 0048e0f4  83c414               add esp, 0x14
// 0048e0f7  85c0                 test eax, eax
// 0048e0f9  750e                 jne 0x48e109
// 0048e0fb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048e101  85f6                 test esi, esi
// 0048e103  75db                 jne 0x48e0e0
// 0048e105  33c0                 xor eax, eax
// 0048e107  5e                   pop esi
// 0048e108  c3                   ret 
// 0048e109  8bc8                 mov ecx, eax
// 0048e10b  5e                   pop esi
// 0048e10c  e9cfeaffff           jmp 0x48cbe0

struct RefPropDescriptor {
    void* getset;
    void* checkFlags();
};

extern "C" void* __cdecl sub_630D36(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_48CBE0(void*);

void* RefPropDescriptor_find(void* p)
{
    while (p) {
        void* r = sub_630D36(p, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (r)
            return sub_48CBE0(r);
        p = *(void**)((char*)p + 0xbc);
    }
    return 0;
}
