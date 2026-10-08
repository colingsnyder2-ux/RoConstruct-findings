// from server: 53% by colin
// roc 2007-08 005eaea0  unit: RBX::FlagStand  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eaea0
//
// 005eaea0  56                   push esi
// 005eaea1  8bf1                 mov esi, ecx
// 005eaea3  e8a8ffffff           call 0x5eae50
// 005eaea8  f644240801           test byte ptr [esp + 8], 1
// 005eaead  8b86b0020000         mov eax, dword ptr [esi + 0x2b0]
// 005eaeb3  c786ac020000ac4c7a00 mov dword ptr [esi + 0x2ac], 0x7a4cac
// 005eaebd  8b4804               mov ecx, dword ptr [eax + 4]
// 005eaec0  c78431b0020000a44c7a00 mov dword ptr [ecx + esi + 0x2b0], 0x7a4ca4
// 005eaecb  740a                 je 0x5eaed7
// 005eaecd  56                   push esi
// 005eaece  ff15c4e67700         call dword ptr [0x77e6c4]
// 005eaed4  83c404               add esp, 4
// 005eaed7  8bc6                 mov eax, esi
// 005eaed9  5e                   pop esi
// 005eaeda  c20400               ret 4

struct FlagStand {
    char pad[0x2ac];
    void* vtable_2ac;
    int field_2b0;
    void destroy(char);
};

extern "C" void __cdecl free(void*);

void __stdcall sub_5eae50();

void FlagStand::destroy(char flags) {
    sub_5eae50();
    if (flags & 1) {
        free(this);
    }
}
