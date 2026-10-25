// from server: 100% by tester
// roc 2008-06 00439180  unit: IIHAAH::?$CMap  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439180
//
// 00439180  56                   push esi
// 00439181  8bf1                 mov esi, ecx
// 00439183  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00439189  85c0                 test eax, eax
// 0043918b  7409                 je 0x439196
// 0043918d  50                   push eax
// 0043918e  e8e7742600           call 0x6a067a
// 00439193  83c404               add esp, 4
// 00439196  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0043919c  50                   push eax
// 0043919d  c7861c01000000000000 mov dword ptr [esi + 0x11c], 0
// 004391a7  c7862001000000000000 mov dword ptr [esi + 0x120], 0
// 004391b1  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 004391bb  e8ba742600           call 0x6a067a
// 004391c0  83c404               add esp, 4
// 004391c3  8bce                 mov ecx, esi
// 004391c5  5e                   pop esi
// 004391c6  e965a42d00           jmp 0x713630

extern "C" void __cdecl release(void *);

struct S {
    unsigned char padding[0x110];
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
