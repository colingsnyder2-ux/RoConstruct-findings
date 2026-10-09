// from server: 89% by colin
// roc 2007-08 004898b0  unit: RBX::Network::VPlayer::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004898b0
//
// 004898b0  56                   push esi
// 004898b1  8bf1                 mov esi, ecx
// 004898b3  c70640af7900         mov dword ptr [esi], 0x79af40
// 004898b9  8b4608               mov eax, dword ptr [esi + 8]
// 004898bc  85c0                 test eax, eax
// 004898be  7409                 je 0x4898c9
// 004898c0  50                   push eax
// 004898c1  e89c631a00           call 0x62fc62
// 004898c6  83c404               add esp, 4
// 004898c9  f644240801           test byte ptr [esp + 8], 1
// 004898ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004898d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004898dc  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004898e3  7409                 je 0x4898ee
// 004898e5  56                   push esi
// 004898e6  e877631a00           call 0x62fc62
// 004898eb  83c404               add esp, 4
// 004898ee  8bc6                 mov eax, esi
// 004898f0  5e                   pop esi
// 004898f1  c20400               ret 4

struct Notifier {
    void* vtable;
    int field4;
    void* field8;
    int fieldC;
    int field10;
    Notifier* destroy(char);
};

void __cdecl sub_62FC62(void*);

Notifier* Notifier::destroy(char flag) {
    this->vtable = (void*)0x79af40;
    if (this->field8) {
        sub_62FC62(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flag & 1) {
        sub_62FC62(this);
    }
    return this;
}
