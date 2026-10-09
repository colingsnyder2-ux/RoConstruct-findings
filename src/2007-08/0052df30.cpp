// from server: 89% by colin
// roc 2007-08 0052df30  unit: RBX::VRunService::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052df30
//
// 0052df30  56                   push esi
// 0052df31  8bf1                 mov esi, ecx
// 0052df33  c7065c497a00         mov dword ptr [esi], 0x7a495c
// 0052df39  8b4608               mov eax, dword ptr [esi + 8]
// 0052df3c  85c0                 test eax, eax
// 0052df3e  7409                 je 0x52df49
// 0052df40  50                   push eax
// 0052df41  e81c1d1000           call 0x62fc62
// 0052df46  83c404               add esp, 4
// 0052df49  f644240801           test byte ptr [esp + 8], 1
// 0052df4e  c7460800000000       mov dword ptr [esi + 8], 0
// 0052df55  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0052df5c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0052df63  7409                 je 0x52df6e
// 0052df65  56                   push esi
// 0052df66  e8f71c1000           call 0x62fc62
// 0052df6b  83c404               add esp, 4
// 0052df6e  8bc6                 mov eax, esi
// 0052df70  5e                   pop esi
// 0052df71  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    Notifier* destroy(char flags);
};

extern "C" void __cdecl sub_62fc62(void* p);

Notifier* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a495c;
    if (this->field_8) {
        sub_62fc62(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1) {
        sub_62fc62(this);
    }
    return this;
}
