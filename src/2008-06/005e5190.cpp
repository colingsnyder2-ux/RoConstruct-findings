// from server: 100% by king_originala
// roc 2008-06 005e5190  unit: RBX::SimJob  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5190
//
// 005e5190  56                   push esi
// 005e5191  8bf1                 mov esi, ecx
// 005e5193  c7062cf78300         mov dword ptr [esi], 0x83f72c
// 005e5199  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e519c  85c0                 test eax, eax
// 005e519e  7409                 je 0x5e51a9
// 005e51a0  50                   push eax
// 005e51a1  e8d4b40b00           call 0x6a067a
// 005e51a6  83c404               add esp, 4
// 005e51a9  8b4604               mov eax, dword ptr [esi + 4]
// 005e51ac  50                   push eax
// 005e51ad  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005e51b4  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005e51bb  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005e51c2  e8b3b40b00           call 0x6a067a
// 005e51c7  83c404               add esp, 4
// 005e51ca  f644240801           test byte ptr [esp + 8], 1
// 005e51cf  7409                 je 0x5e51da
// 005e51d1  56                   push esi
// 005e51d2  e8a3b40b00           call 0x6a067a
// 005e51d7  83c404               add esp, 4
// 005e51da  8bc6                 mov eax, esi
// 005e51dc  5e                   pop esi
// 005e51dd  c20400               ret 4

extern "C" void __cdecl release(void*);

struct SimJob {
    unsigned int vtable;
    void* field4;
    unsigned int field8;
    unsigned int fieldC;
    void* field10;
    void* field14;
    void* field18;

    SimJob* destroy(unsigned int flags);
};

SimJob* SimJob::destroy(unsigned int flags) {
    *(volatile unsigned int*)&vtable = 0x83f72c;
    void* p = *(void* volatile*)&field10;
    if (p)
        release(p);
    field10 = 0;
    field14 = 0;
    field18 = 0;
    release(field4);
    if (flags & 1)
        release(this);
    return this;
}
