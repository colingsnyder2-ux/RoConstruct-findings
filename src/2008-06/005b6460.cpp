// from server: 100% by colin
// roc 2008-06 005b6460  unit: RBX::FillToolColor  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6460
//
// 005b6460  56                   push esi
// 005b6461  8bf1                 mov esi, ecx
// 005b6463  8b4610               mov eax, dword ptr [esi + 0x10]
// 005b6466  85c0                 test eax, eax
// 005b6468  7409                 je 0x5b6473
// 005b646a  50                   push eax
// 005b646b  e80aa20e00           call 0x6a067a
// 005b6470  83c404               add esp, 4
// 005b6473  8b4604               mov eax, dword ptr [esi + 4]
// 005b6476  50                   push eax
// 005b6477  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005b647e  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005b6485  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005b648c  e8e9a10e00           call 0x6a067a
// 005b6491  83c404               add esp, 4
// 005b6494  f644240801           test byte ptr [esp + 8], 1
// 005b6499  7409                 je 0x5b64a4
// 005b649b  56                   push esi
// 005b649c  e8d9a10e00           call 0x6a067a
// 005b64a1  83c404               add esp, 4
// 005b64a4  8bc6                 mov eax, esi
// 005b64a6  5e                   pop esi
// 005b64a7  c20400               ret 4

extern "C" void __cdecl free(void*);

struct FillToolColor {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    FillToolColor* destroy(char);
};

FillToolColor* FillToolColor::destroy(char flags) {
    if (field10) {
        free(field10);
    }
    void* p = field4;
    field10 = 0;
    field14 = 0;
    field18 = 0;
    free(p);
    if (flags & 1) {
        free(this);
    }
    return this;
}
