// from server: 89% by colin
// roc 2007-08 00540020  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540020
//
// 00540020  56                   push esi
// 00540021  8bf1                 mov esi, ecx
// 00540023  c706e4647a00         mov dword ptr [esi], 0x7a64e4
// 00540029  8b4608               mov eax, dword ptr [esi + 8]
// 0054002c  85c0                 test eax, eax
// 0054002e  7409                 je 0x540039
// 00540030  50                   push eax
// 00540031  e82cfc0e00           call 0x62fc62
// 00540036  83c404               add esp, 4
// 00540039  f644240801           test byte ptr [esp + 8], 1
// 0054003e  c7460800000000       mov dword ptr [esi + 8], 0
// 00540045  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0054004c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00540053  7409                 je 0x54005e
// 00540055  56                   push esi
// 00540056  e807fc0e00           call 0x62fc62
// 0054005b  83c404               add esp, 4
// 0054005e  8bc6                 mov eax, esi
// 00540060  5e                   pop esi
// 00540061  c20400               ret 4

struct VInstanceNotifier {
    void* vtable;
    int field4;
    void* field8;
    int fieldC;
    int field10;
    void* destroy(unsigned int flags);
};

extern "C" void __cdecl sub_0062FC62(void*);

void* VInstanceNotifier::destroy(unsigned int flags)
{
    this->vtable = (void*)0x7a64e4;
    if (this->field8 != 0) {
        sub_0062FC62(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        sub_0062FC62(this);
    }
    return this;
}
