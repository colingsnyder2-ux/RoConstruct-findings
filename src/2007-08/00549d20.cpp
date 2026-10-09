// from server: 89% by colin
// roc 2007-08 00549d20  unit: RBX::VServiceProvider::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549d20
//
// 00549d20  56                   push esi
// 00549d21  8bf1                 mov esi, ecx
// 00549d23  c706e0717a00         mov dword ptr [esi], 0x7a71e0
// 00549d29  8b4608               mov eax, dword ptr [esi + 8]
// 00549d2c  85c0                 test eax, eax
// 00549d2e  7409                 je 0x549d39
// 00549d30  50                   push eax
// 00549d31  e82c5f0e00           call 0x62fc62
// 00549d36  83c404               add esp, 4
// 00549d39  f644240801           test byte ptr [esp + 8], 1
// 00549d3e  c7460800000000       mov dword ptr [esi + 8], 0
// 00549d45  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00549d4c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00549d53  7409                 je 0x549d5e
// 00549d55  56                   push esi
// 00549d56  e8075f0e00           call 0x62fc62
// 00549d5b  83c404               add esp, 4
// 00549d5e  8bc6                 mov eax, esi
// 00549d60  5e                   pop esi
// 00549d61  c20400               ret 4

struct Notifier {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* destroy(char flags);
};

void __cdecl operator_delete(void* p);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a71e0;
    if (this->field8) {
        operator_delete(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        operator_delete(this);
    }
    return this;
}
