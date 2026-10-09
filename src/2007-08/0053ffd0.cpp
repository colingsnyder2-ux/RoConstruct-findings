// from server: 89% by colin
// roc 2007-08 0053ffd0  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ffd0
//
// 0053ffd0  56                   push esi
// 0053ffd1  8bf1                 mov esi, ecx
// 0053ffd3  c706d4647a00         mov dword ptr [esi], 0x7a64d4
// 0053ffd9  8b4608               mov eax, dword ptr [esi + 8]
// 0053ffdc  85c0                 test eax, eax
// 0053ffde  7409                 je 0x53ffe9
// 0053ffe0  50                   push eax
// 0053ffe1  e87cfc0e00           call 0x62fc62
// 0053ffe6  83c404               add esp, 4
// 0053ffe9  f644240801           test byte ptr [esp + 8], 1
// 0053ffee  c7460800000000       mov dword ptr [esi + 8], 0
// 0053fff5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053fffc  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00540003  7409                 je 0x54000e
// 00540005  56                   push esi
// 00540006  e857fc0e00           call 0x62fc62
// 0054000b  83c404               add esp, 4
// 0054000e  8bc6                 mov eax, esi
// 00540010  5e                   pop esi
// 00540011  c20400               ret 4

struct Notifier {
    void* vtable;
    char pad[4];
    void* field8;
    void* fieldC;
    void* field10;
    Notifier* destroy(char);
};

extern "C" void __cdecl sub_62fc62(void*);

Notifier* Notifier::destroy(char flags)
{
    this->vtable = (void*)0x7a64d4;
    if (this->field8) {
        sub_62fc62(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        sub_62fc62(this);
    }
    return this;
}
