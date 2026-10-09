// from server: 89% by colin
// roc 2007-08 00540070  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540070
//
// 00540070  56                   push esi
// 00540071  8bf1                 mov esi, ecx
// 00540073  c706f4647a00         mov dword ptr [esi], 0x7a64f4
// 00540079  8b4608               mov eax, dword ptr [esi + 8]
// 0054007c  85c0                 test eax, eax
// 0054007e  7409                 je 0x540089
// 00540080  50                   push eax
// 00540081  e8dcfb0e00           call 0x62fc62
// 00540086  83c404               add esp, 4
// 00540089  f644240801           test byte ptr [esp + 8], 1
// 0054008e  c7460800000000       mov dword ptr [esi + 8], 0
// 00540095  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0054009c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005400a3  7409                 je 0x5400ae
// 005400a5  56                   push esi
// 005400a6  e8b7fb0e00           call 0x62fc62
// 005400ab  83c404               add esp, 4
// 005400ae  8bc6                 mov eax, esi
// 005400b0  5e                   pop esi
// 005400b1  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void* destroy(char flags);
};

extern "C" void __cdecl sub_62FC62(void*);

void* Notifier::destroy(char flags)
{
    this->vtable = (void*)0x7a64f4;
    if (this->field_8) {
        sub_62FC62(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
