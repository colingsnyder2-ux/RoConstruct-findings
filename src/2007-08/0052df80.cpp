// from server: 89% by colin
// roc 2007-08 0052df80  unit: RBX::VRunService::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052df80
//
// 0052df80  56                   push esi
// 0052df81  8bf1                 mov esi, ecx
// 0052df83  c7066c497a00         mov dword ptr [esi], 0x7a496c
// 0052df89  8b4608               mov eax, dword ptr [esi + 8]
// 0052df8c  85c0                 test eax, eax
// 0052df8e  7409                 je 0x52df99
// 0052df90  50                   push eax
// 0052df91  e8cc1c1000           call 0x62fc62
// 0052df96  83c404               add esp, 4
// 0052df99  f644240801           test byte ptr [esp + 8], 1
// 0052df9e  c7460800000000       mov dword ptr [esi + 8], 0
// 0052dfa5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0052dfac  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0052dfb3  7409                 je 0x52dfbe
// 0052dfb5  56                   push esi
// 0052dfb6  e8a71c1000           call 0x62fc62
// 0052dfbb  83c404               add esp, 4
// 0052dfbe  8bc6                 mov eax, esi
// 0052dfc0  5e                   pop esi
// 0052dfc1  c20400               ret 4

struct Notifier {
    void* vtable;
    int pad;
    void* field8;
    int fieldC;
    int field10;
    void* destroy(char flags);
};

extern "C" void __cdecl free_ptr(void* p);

void* Notifier::destroy(char flags) {
    this->vtable = (void*)0x7a496c;
    if (this->field8) {
        free_ptr(this->field8);
    }
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    if (flags & 1) {
        free_ptr(this);
    }
    return this;
}
