// from server: 100% by king_originala
// roc 2008-06 00419170  unit: VCLuaFunction::?$CComObject  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419170
//
// 00419170  56                   push esi
// 00419171  8bf1                 mov esi, ecx
// 00419173  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00419177  7448                 je 0x4191c1
// 00419179  8b4618               mov eax, dword ptr [esi + 0x18]
// 0041917c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041917f  57                   push edi
// 00419180  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00419183  8b07                 mov eax, dword ptr [edi]
// 00419185  85c0                 test eax, eax
// 00419187  7418                 je 0x4191a1
// 00419189  8b00                 mov eax, dword ptr [eax]
// 0041918b  8d4f08               lea ecx, [edi + 8]
// 0041918e  85c0                 test eax, eax
// 00419190  7409                 je 0x41919b
// 00419192  6a01                 push 1
// 00419194  51                   push ecx
// 00419195  51                   push ecx
// 00419196  ffd0                 call eax
// 00419198  83c40c               add esp, 0xc
// 0041919b  c70700000000         mov dword ptr [edi], 0
// 004191a1  ff4618               inc dword ptr [esi + 0x18]
// 004191a4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004191a7  5f                   pop edi
// 004191a8  394614               cmp dword ptr [esi + 0x14], eax
// 004191ab  7707                 ja 0x4191b4
// 004191ad  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004191b4  83461cff             add dword ptr [esi + 0x1c], -1
// 004191b8  7507                 jne 0x4191c1
// 004191ba  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004191c1  5e                   pop esi
// 004191c2  c3                   ret 

typedef void (__cdecl *Callback)(void *, void *, int);

struct Entry {
    Callback *callbacks;
    unsigned reserved;
    unsigned char storage[1];
};

struct S {
    unsigned char reserved[16];
    Entry **entries;
    unsigned capacity;
    unsigned index;
    unsigned count;

    void f();
};

void S::f()
{
    if (count != 0) {
        Entry *entry = entries[index];
        if (entry->callbacks != 0) {
            Callback callback = entry->callbacks[0];
            void *storage = entry->storage;
            if (callback != 0)
                callback(storage, storage, 1);
            entry->callbacks = 0;
        }

        ++index;
        if (capacity <= index)
            index = 0;

        if (--count == 0)
            index = 0;
    }
}
