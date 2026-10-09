// from server: 89% by colin
// roc 2007-08 00586e20  unit: RBX::VFillToolColor::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586e20
//
// 00586e20  56                   push esi
// 00586e21  8bf1                 mov esi, ecx
// 00586e23  c70648cf7a00         mov dword ptr [esi], 0x7acf48
// 00586e29  8b4608               mov eax, dword ptr [esi + 8]
// 00586e2c  85c0                 test eax, eax
// 00586e2e  7409                 je 0x586e39
// 00586e30  50                   push eax
// 00586e31  e82c8e0a00           call 0x62fc62
// 00586e36  83c404               add esp, 4
// 00586e39  f644240801           test byte ptr [esp + 8], 1
// 00586e3e  c7460800000000       mov dword ptr [esi + 8], 0
// 00586e45  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00586e4c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00586e53  7409                 je 0x586e5e
// 00586e55  56                   push esi
// 00586e56  e8078e0a00           call 0x62fc62
// 00586e5b  83c404               add esp, 4
// 00586e5e  8bc6                 mov eax, esi
// 00586e60  5e                   pop esi
// 00586e61  c20400               ret 4

struct VFillToolColorNotifier {
    void* vtable;
    char pad[4];
    void* field8;
    void* fieldC;
    void* field10;
    VFillToolColorNotifier* Destroy(char flag);
};

extern "C" void __cdecl FreeMem(void* p);

VFillToolColorNotifier* VFillToolColorNotifier::Destroy(char flag)
{
    vtable = (void*)0x7acf48;
    if (field8) {
        FreeMem(field8);
    }
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    if (flag & 1) {
        FreeMem(this);
    }
    return this;
}
