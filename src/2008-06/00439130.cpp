// from server: 100% by tester
// roc 2008-06 00439130  unit: IIHAAH::?$CMap  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439130
//
// 00439130  56                   push esi
// 00439131  8bf1                 mov esi, ecx
// 00439133  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00439139  85c0                 test eax, eax
// 0043913b  7409                 je 0x439146
// 0043913d  50                   push eax
// 0043913e  e837752600           call 0x6a067a
// 00439143  83c404               add esp, 4
// 00439146  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0043914c  50                   push eax
// 0043914d  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 00439157  c7863401000000000000 mov dword ptr [esi + 0x134], 0
// 00439161  c7863801000000000000 mov dword ptr [esi + 0x138], 0
// 0043916b  e80a752600           call 0x6a067a
// 00439170  83c404               add esp, 4
// 00439173  8bce                 mov ecx, esi
// 00439175  5e                   pop esi
// 00439176  e995e32d00           jmp 0x717510

extern "C" void __cdecl release(void *);

struct S {
    unsigned char padding[0x124];
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
