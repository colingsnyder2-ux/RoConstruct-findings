// from server: 89% by colin
// roc 2007-08 005400c0  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005400c0
//
// 005400c0  56                   push esi
// 005400c1  8bf1                 mov esi, ecx
// 005400c3  c70604657a00         mov dword ptr [esi], 0x7a6504
// 005400c9  8b4608               mov eax, dword ptr [esi + 8]
// 005400cc  85c0                 test eax, eax
// 005400ce  7409                 je 0x5400d9
// 005400d0  50                   push eax
// 005400d1  e88cfb0e00           call 0x62fc62
// 005400d6  83c404               add esp, 4
// 005400d9  f644240801           test byte ptr [esp + 8], 1
// 005400de  c7460800000000       mov dword ptr [esi + 8], 0
// 005400e5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005400ec  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005400f3  7409                 je 0x5400fe
// 005400f5  56                   push esi
// 005400f6  e867fb0e00           call 0x62fc62
// 005400fb  83c404               add esp, 4
// 005400fe  8bc6                 mov eax, esi
// 00540100  5e                   pop esi
// 00540101  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void* destroy(char flags);
};

extern "C" void __cdecl sub_0062FC62(void* p);

void* Notifier::destroy(char flags)
{
    this->vtable = (void*)0x7a6504;
    if (this->field_8) {
        sub_0062FC62(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1) {
        sub_0062FC62(this);
    }
    return this;
}
