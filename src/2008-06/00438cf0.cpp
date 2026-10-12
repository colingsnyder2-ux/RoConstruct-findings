// from server: 100% by king_originala
// roc 2008-06 00438cf0  unit: IIHAAH::?$CMap  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438cf0
//
// 00438cf0  56                   push esi
// 00438cf1  8bf1                 mov esi, ecx
// 00438cf3  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00438cf9  85c0                 test eax, eax
// 00438cfb  7409                 je 0x438d06
// 00438cfd  50                   push eax
// 00438cfe  e877792600           call 0x6a067a
// 00438d03  83c404               add esp, 4
// 00438d06  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00438d0c  50                   push eax
// 00438d0d  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 00438d17  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 00438d21  c7862c01000000000000 mov dword ptr [esi + 0x12c], 0
// 00438d2b  e84a792600           call 0x6a067a
// 00438d30  83c404               add esp, 4
// 00438d33  8bce                 mov ecx, esi
// 00438d35  5e                   pop esi
// 00438d36  e975eb2d00           jmp 0x7178b0

extern "C" void __cdecl release(void *);

struct S {
    unsigned char padding[0x118];
    void *storage;
    unsigned char reserved[8];
    void *entries;
    unsigned int count;
    unsigned int capacity;

    void cleanup();
    void finish();
};

void S::cleanup()
{
    if (entries)
        release(entries);

    entries = 0;
    count = 0;
    capacity = 0;

    release(storage);
    finish();
}
