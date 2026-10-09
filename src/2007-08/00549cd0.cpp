// from server: 89% by colin
// roc 2007-08 00549cd0  unit: RBX::VServiceProvider::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549cd0
//
// 00549cd0  56                   push esi
// 00549cd1  8bf1                 mov esi, ecx
// 00549cd3  c706d0717a00         mov dword ptr [esi], 0x7a71d0
// 00549cd9  8b4608               mov eax, dword ptr [esi + 8]
// 00549cdc  85c0                 test eax, eax
// 00549cde  7409                 je 0x549ce9
// 00549ce0  50                   push eax
// 00549ce1  e87c5f0e00           call 0x62fc62
// 00549ce6  83c404               add esp, 4
// 00549ce9  f644240801           test byte ptr [esp + 8], 1
// 00549cee  c7460800000000       mov dword ptr [esi + 8], 0
// 00549cf5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00549cfc  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00549d03  7409                 je 0x549d0e
// 00549d05  56                   push esi
// 00549d06  e8575f0e00           call 0x62fc62
// 00549d0b  83c404               add esp, 4
// 00549d0e  8bc6                 mov eax, esi
// 00549d10  5e                   pop esi
// 00549d11  c20400               ret 4

struct Notifier {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    Notifier* destroy(char flags);
};

void __cdecl freeWrapper(void* p);

Notifier* Notifier::destroy(char flags) {
    vtable = (void*)0x7a71d0;
    if (field8) {
        freeWrapper(field8);
    }
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    if (flags & 1) {
        freeWrapper(this);
    }
    return this;
}
