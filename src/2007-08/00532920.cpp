// from server: 89% by colin
// roc 2007-08 00532920  unit: RBX::VSelection::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532920
//
// 00532920  56                   push esi
// 00532921  8bf1                 mov esi, ecx
// 00532923  c7062c537a00         mov dword ptr [esi], 0x7a532c
// 00532929  8b4608               mov eax, dword ptr [esi + 8]
// 0053292c  85c0                 test eax, eax
// 0053292e  7409                 je 0x532939
// 00532930  50                   push eax
// 00532931  e82cd30f00           call 0x62fc62
// 00532936  83c404               add esp, 4
// 00532939  f644240801           test byte ptr [esp + 8], 1
// 0053293e  c7460800000000       mov dword ptr [esi + 8], 0
// 00532945  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053294c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00532953  7409                 je 0x53295e
// 00532955  56                   push esi
// 00532956  e807d30f00           call 0x62fc62
// 0053295b  83c404               add esp, 4
// 0053295e  8bc6                 mov eax, esi
// 00532960  5e                   pop esi
// 00532961  c20400               ret 4

struct Notifier {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* destroy(char flags);
};

void __cdecl freeMem(void* p);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a532c;
    if (this->field8) {
        freeMem(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        freeMem(this);
    }
    return this;
}
