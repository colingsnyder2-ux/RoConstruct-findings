// from server: 89% by colin
// roc 2007-08 005aa190  unit: RBX::VWorld::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa190
//
// 005aa190  56                   push esi
// 005aa191  8bf1                 mov esi, ecx
// 005aa193  c70690587b00         mov dword ptr [esi], 0x7b5890
// 005aa199  8b4608               mov eax, dword ptr [esi + 8]
// 005aa19c  85c0                 test eax, eax
// 005aa19e  7409                 je 0x5aa1a9
// 005aa1a0  50                   push eax
// 005aa1a1  e8bc5a0800           call 0x62fc62
// 005aa1a6  83c404               add esp, 4
// 005aa1a9  f644240801           test byte ptr [esp + 8], 1
// 005aa1ae  c7460800000000       mov dword ptr [esi + 8], 0
// 005aa1b5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005aa1bc  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005aa1c3  7409                 je 0x5aa1ce
// 005aa1c5  56                   push esi
// 005aa1c6  e8975a0800           call 0x62fc62
// 005aa1cb  83c404               add esp, 4
// 005aa1ce  8bc6                 mov eax, esi
// 005aa1d0  5e                   pop esi
// 005aa1d1  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    void* field_C;
    void* field_10;
    Notifier* destroy(char flags);
};

extern "C" void __cdecl sub_62FC62(void* p);

Notifier* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7b5890;
    if (this->field_8) {
        sub_62FC62(this->field_8);
    }
    this->field_8 = 0;
    this->field_C = 0;
    this->field_10 = 0;
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
