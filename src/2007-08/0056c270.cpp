// from server: 89% by colin
// roc 2007-08 0056c270  unit: RBX::VStandardOut::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c270
//
// 0056c270  56                   push esi
// 0056c271  8bf1                 mov esi, ecx
// 0056c273  c706d09e7a00         mov dword ptr [esi], 0x7a9ed0
// 0056c279  8b4608               mov eax, dword ptr [esi + 8]
// 0056c27c  85c0                 test eax, eax
// 0056c27e  7409                 je 0x56c289
// 0056c280  50                   push eax
// 0056c281  e8dc390c00           call 0x62fc62
// 0056c286  83c404               add esp, 4
// 0056c289  f644240801           test byte ptr [esp + 8], 1
// 0056c28e  c7460800000000       mov dword ptr [esi + 8], 0
// 0056c295  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0056c29c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0056c2a3  7409                 je 0x56c2ae
// 0056c2a5  56                   push esi
// 0056c2a6  e8b7390c00           call 0x62fc62
// 0056c2ab  83c404               add esp, 4
// 0056c2ae  8bc6                 mov eax, esi
// 0056c2b0  5e                   pop esi
// 0056c2b1  c20400               ret 4

struct VStandardOutNotifier
{
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;

    void* destroy(char flags);
};

extern "C" void __cdecl free_62fc62(void*);

void* VStandardOutNotifier::destroy(char flags)
{
    vtable = (void*)0x7a9ed0;
    if (field_8)
    {
        free_62fc62(field_8);
    }
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    if (flags & 1)
    {
        free_62fc62(this);
    }
    return this;
}
