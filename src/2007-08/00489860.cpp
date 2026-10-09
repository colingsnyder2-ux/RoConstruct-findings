// from server: 89% by colin
// roc 2007-08 00489860  unit: RBX::Network::VPlayer::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489860
//
// 00489860  56                   push esi
// 00489861  8bf1                 mov esi, ecx
// 00489863  c70630af7900         mov dword ptr [esi], 0x79af30
// 00489869  8b4608               mov eax, dword ptr [esi + 8]
// 0048986c  85c0                 test eax, eax
// 0048986e  7409                 je 0x489879
// 00489870  50                   push eax
// 00489871  e8ec631a00           call 0x62fc62
// 00489876  83c404               add esp, 4
// 00489879  f644240801           test byte ptr [esp + 8], 1
// 0048987e  c7460800000000       mov dword ptr [esi + 8], 0
// 00489885  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0048988c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00489893  7409                 je 0x48989e
// 00489895  56                   push esi
// 00489896  e8c7631a00           call 0x62fc62
// 0048989b  83c404               add esp, 4
// 0048989e  8bc6                 mov eax, esi
// 004898a0  5e                   pop esi
// 004898a1  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void* destroy(char flags);
};

extern "C" void __cdecl sub_62fc62(void* p);

void* Notifier::destroy(char flags)
{
    vtable = (void*)0x79af30;
    if (field_8) {
        sub_62fc62(field_8);
    }
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    if (flags & 1) {
        sub_62fc62(this);
    }
    return this;
}
