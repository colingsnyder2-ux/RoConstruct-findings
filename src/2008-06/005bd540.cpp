// from server: 100% by king_originala
// roc 2008-06 005bd540  unit: VStockSound::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd540
//
// 005bd540  56                   push esi
// 005bd541  8bf1                 mov esi, ecx
// 005bd543  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005bd549  85c0                 test eax, eax
// 005bd54b  7411                 je 0x5bd55e
// 005bd54d  6a01                 push 1
// 005bd54f  50                   push eax
// 005bd550  e81d270e00           call 0x69fc72
// 005bd555  50                   push eax
// 005bd556  e845b2ffff           call 0x5b87a0
// 005bd55b  83c404               add esp, 4
// 005bd55e  8bce                 mov ecx, esi
// 005bd560  e84bf0ffff           call 0x5bc5b0
// 005bd565  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 005bd56c  7416                 je 0x5bd584
// 005bd56e  6810709700           push 0x977010
// 005bd573  8bce                 mov ecx, esi
// 005bd575  c7866801000000000000 mov dword ptr [esi + 0x168], 0
// 005bd57f  e87c05e5ff           call 0x40db00
// 005bd584  5e                   pop esi
// 005bd585  c3                   ret 

extern "C" void* __stdcall transform(void*, int);
extern "C" void __cdecl consume(void*);
extern const unsigned char property;

struct S {
    unsigned char padding0[0x13c];
    void* handle;
    unsigned char padding1[0x28];
    int state;

    void update();
    void notify(const void*);
    void f();
};

void S::f()
{
    if (handle)
        consume(transform(handle, 1));

    update();

    if (state != 0) {
        state = 0;
        notify(&property);
    }
}
