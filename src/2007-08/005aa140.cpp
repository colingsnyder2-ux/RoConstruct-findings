// from server: 89% by colin
// roc 2007-08 005aa140  unit: RBX::VWorld::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa140
//
// 005aa140  56                   push esi
// 005aa141  8bf1                 mov esi, ecx
// 005aa143  c70680587b00         mov dword ptr [esi], 0x7b5880
// 005aa149  8b4608               mov eax, dword ptr [esi + 8]
// 005aa14c  85c0                 test eax, eax
// 005aa14e  7409                 je 0x5aa159
// 005aa150  50                   push eax
// 005aa151  e80c5b0800           call 0x62fc62
// 005aa156  83c404               add esp, 4
// 005aa159  f644240801           test byte ptr [esp + 8], 1
// 005aa15e  c7460800000000       mov dword ptr [esi + 8], 0
// 005aa165  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005aa16c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005aa173  7409                 je 0x5aa17e
// 005aa175  56                   push esi
// 005aa176  e8e75a0800           call 0x62fc62
// 005aa17b  83c404               add esp, 4
// 005aa17e  8bc6                 mov eax, esi
// 005aa180  5e                   pop esi
// 005aa181  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void* destroy(char flags);
};

extern "C" void __cdecl free_ptr(void* p);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7b5880;
    if (this->field_8) {
        free_ptr(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1) {
        free_ptr(this);
    }
    return this;
}
