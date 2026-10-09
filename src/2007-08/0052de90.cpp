// from server: 89% by colin
// roc 2007-08 0052de90  unit: RBX::VRunService::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052de90
//
// 0052de90  56                   push esi
// 0052de91  8bf1                 mov esi, ecx
// 0052de93  c7063c497a00         mov dword ptr [esi], 0x7a493c
// 0052de99  8b4608               mov eax, dword ptr [esi + 8]
// 0052de9c  85c0                 test eax, eax
// 0052de9e  7409                 je 0x52dea9
// 0052dea0  50                   push eax
// 0052dea1  e8bc1d1000           call 0x62fc62
// 0052dea6  83c404               add esp, 4
// 0052dea9  f644240801           test byte ptr [esp + 8], 1
// 0052deae  c7460800000000       mov dword ptr [esi + 8], 0
// 0052deb5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0052debc  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0052dec3  7409                 je 0x52dece
// 0052dec5  56                   push esi
// 0052dec6  e8971d1000           call 0x62fc62
// 0052decb  83c404               add esp, 4
// 0052dece  8bc6                 mov eax, esi
// 0052ded0  5e                   pop esi
// 0052ded1  c20400               ret 4

struct Notifier {
    void* vtable;
    int pad;
    void* field8;
    int fieldC;
    int field10;
    void* destroy(unsigned int flags);
};

extern "C" void __cdecl free(void*);

void* Notifier::destroy(unsigned int flags)
{
    vtable = (void*)0x7a493c;
    if (field8) {
        free(field8);
    }
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    if (flags & 1) {
        free(this);
    }
    return this;
}
