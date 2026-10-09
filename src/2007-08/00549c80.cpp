// from server: 91% by colin
// roc 2007-08 00549c80  unit: RBX::VServiceProvider::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549c80
//
// 00549c80  56                   push esi
// 00549c81  8bf1                 mov esi, ecx
// 00549c83  c706c0717a00         mov dword ptr [esi], 0x7a71c0
// 00549c89  8b4608               mov eax, dword ptr [esi + 8]
// 00549c8c  85c0                 test eax, eax
// 00549c8e  7409                 je 0x549c99
// 00549c90  50                   push eax
// 00549c91  e8cc5f0e00           call 0x62fc62
// 00549c96  83c404               add esp, 4
// 00549c99  f644240801           test byte ptr [esp + 8], 1
// 00549c9e  c7460800000000       mov dword ptr [esi + 8], 0
// 00549ca5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00549cac  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00549cb3  7409                 je 0x549cbe
// 00549cb5  56                   push esi
// 00549cb6  e8a75f0e00           call 0x62fc62
// 00549cbb  83c404               add esp, 4
// 00549cbe  8bc6                 mov eax, esi
// 00549cc0  5e                   pop esi
// 00549cc1  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void* destroy(char flags);
};

extern "C" void __cdecl free(void*);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a71c0;
    if (this->field_8) {
        free(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1) {
        free(this);
    }
    return this;
}
