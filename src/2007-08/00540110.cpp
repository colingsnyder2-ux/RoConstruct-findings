// from server: 89% by colin
// roc 2007-08 00540110  unit: RBX::VInstance::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540110
//
// 00540110  56                   push esi
// 00540111  8bf1                 mov esi, ecx
// 00540113  c70614657a00         mov dword ptr [esi], 0x7a6514
// 00540119  8b4608               mov eax, dword ptr [esi + 8]
// 0054011c  85c0                 test eax, eax
// 0054011e  7409                 je 0x540129
// 00540120  50                   push eax
// 00540121  e83cfb0e00           call 0x62fc62
// 00540126  83c404               add esp, 4
// 00540129  f644240801           test byte ptr [esp + 8], 1
// 0054012e  c7460800000000       mov dword ptr [esi + 8], 0
// 00540135  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0054013c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00540143  7409                 je 0x54014e
// 00540145  56                   push esi
// 00540146  e817fb0e00           call 0x62fc62
// 0054014b  83c404               add esp, 4
// 0054014e  8bc6                 mov eax, esi
// 00540150  5e                   pop esi
// 00540151  c20400               ret 4

struct VInstanceNotifier
{
    void* vtable;
    int field4;
    void* field8;
    int fieldC;
    int field10;
    VInstanceNotifier* destroy(char flags);
};

extern "C" void __cdecl free_540110(void* p);

VInstanceNotifier* VInstanceNotifier::destroy(char flags)
{
    vtable = (void*)0x7a6514;
    if (field8)
    {
        free_540110(field8);
    }
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    if (flags & 1)
    {
        free_540110(this);
    }
    return this;
}
