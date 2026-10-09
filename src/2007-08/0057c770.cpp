// from server: 89% by colin
// roc 2007-08 0057c770  unit: RBX::VWorkspace::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c770
//
// 0057c770  56                   push esi
// 0057c771  8bf1                 mov esi, ecx
// 0057c773  c70664b77a00         mov dword ptr [esi], 0x7ab764
// 0057c779  8b4608               mov eax, dword ptr [esi + 8]
// 0057c77c  85c0                 test eax, eax
// 0057c77e  7409                 je 0x57c789
// 0057c780  50                   push eax
// 0057c781  e8dc340b00           call 0x62fc62
// 0057c786  83c404               add esp, 4
// 0057c789  f644240801           test byte ptr [esp + 8], 1
// 0057c78e  c7460800000000       mov dword ptr [esi + 8], 0
// 0057c795  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0057c79c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0057c7a3  7409                 je 0x57c7ae
// 0057c7a5  56                   push esi
// 0057c7a6  e8b7340b00           call 0x62fc62
// 0057c7ab  83c404               add esp, 4
// 0057c7ae  8bc6                 mov eax, esi
// 0057c7b0  5e                   pop esi
// 0057c7b1  c20400               ret 4

extern "C" void __cdecl free_0057c770(void*);

struct S {
    void* vtable;
    int pad;
    void* field8;
    int fieldC;
    int field10;
    S* destroy(char flags);
};

S* S::destroy(char flags) {
    this->vtable = (void*)0x7ab764;
    if (this->field8) {
        free_0057c770(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        free_0057c770(this);
    }
    return this;
}
