// from server: 89% by colin
// roc 2007-08 00493580  unit: RBX::Network::VPlayers::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493580
//
// 00493580  56                   push esi
// 00493581  8bf1                 mov esi, ecx
// 00493583  c706a4b87900         mov dword ptr [esi], 0x79b8a4
// 00493589  8b4608               mov eax, dword ptr [esi + 8]
// 0049358c  85c0                 test eax, eax
// 0049358e  7409                 je 0x493599
// 00493590  50                   push eax
// 00493591  e8ccc61900           call 0x62fc62
// 00493596  83c404               add esp, 4
// 00493599  f644240801           test byte ptr [esp + 8], 1
// 0049359e  c7460800000000       mov dword ptr [esi + 8], 0
// 004935a5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004935ac  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004935b3  7409                 je 0x4935be
// 004935b5  56                   push esi
// 004935b6  e8a7c61900           call 0x62fc62
// 004935bb  83c404               add esp, 4
// 004935be  8bc6                 mov eax, esi
// 004935c0  5e                   pop esi
// 004935c1  c20400               ret 4

struct Notifier {
    void* vtable;
    int pad;
    void* field8;
    int fieldC;
    int field10;
    Notifier* destroy(char flag);
};

extern "C" void __cdecl free_ptr(void* p);

Notifier* Notifier::destroy(char flag) {
    this->vtable = (void*)0x79b8a4;
    if (this->field8 != 0) {
        free_ptr(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flag & 1) {
        free_ptr(this);
    }
    return this;
}
