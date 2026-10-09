// from server: 89% by colin
// roc 2007-08 00493530  unit: RBX::Network::VPlayers::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493530
//
// 00493530  56                   push esi
// 00493531  8bf1                 mov esi, ecx
// 00493533  c70694b87900         mov dword ptr [esi], 0x79b894
// 00493539  8b4608               mov eax, dword ptr [esi + 8]
// 0049353c  85c0                 test eax, eax
// 0049353e  7409                 je 0x493549
// 00493540  50                   push eax
// 00493541  e81cc71900           call 0x62fc62
// 00493546  83c404               add esp, 4
// 00493549  f644240801           test byte ptr [esp + 8], 1
// 0049354e  c7460800000000       mov dword ptr [esi + 8], 0
// 00493555  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0049355c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00493563  7409                 je 0x49356e
// 00493565  56                   push esi
// 00493566  e8f7c61900           call 0x62fc62
// 0049356b  83c404               add esp, 4
// 0049356e  8bc6                 mov eax, esi
// 00493570  5e                   pop esi
// 00493571  c20400               ret 4

struct Notifier {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    Notifier* destroy(char flag);
};

extern "C" void __cdecl free_wrapper(void* p);

Notifier* Notifier::destroy(char flag)
{
    vtable = (void*)0x79b894;
    if (field_8) {
        free_wrapper(field_8);
    }
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    if (flag & 1) {
        free_wrapper(this);
    }
    return this;
}
