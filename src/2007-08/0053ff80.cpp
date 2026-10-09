// from server: 89% by colin
// roc 2007-08 0053ff80  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ff80
//
// 0053ff80  56                   push esi
// 0053ff81  8bf1                 mov esi, ecx
// 0053ff83  c706c4647a00         mov dword ptr [esi], 0x7a64c4
// 0053ff89  8b4608               mov eax, dword ptr [esi + 8]
// 0053ff8c  85c0                 test eax, eax
// 0053ff8e  7409                 je 0x53ff99
// 0053ff90  50                   push eax
// 0053ff91  e8ccfc0e00           call 0x62fc62
// 0053ff96  83c404               add esp, 4
// 0053ff99  f644240801           test byte ptr [esp + 8], 1
// 0053ff9e  c7460800000000       mov dword ptr [esi + 8], 0
// 0053ffa5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053ffac  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0053ffb3  7409                 je 0x53ffbe
// 0053ffb5  56                   push esi
// 0053ffb6  e8a7fc0e00           call 0x62fc62
// 0053ffbb  83c404               add esp, 4
// 0053ffbe  8bc6                 mov eax, esi
// 0053ffc0  5e                   pop esi
// 0053ffc1  c20400               ret 4

struct Notifier {
    void* vtable;
    int pad;
    void* ptr8;
    int fieldC;
    int field10;
    void* destroy(char flags);
};

extern "C" void __cdecl sub_62FC62(void* p);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a64c4;
    if (this->ptr8) {
        sub_62FC62(this->ptr8);
    }
    this->ptr8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
