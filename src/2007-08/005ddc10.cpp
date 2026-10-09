// from server: 100% by colin
// roc 2007-08 005ddc10  unit: RBX::VHole::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ddc10
//
// 005ddc10  56                   push esi
// 005ddc11  8bf1                 mov esi, ecx
// 005ddc13  e888feffff           call 0x5ddaa0
// 005ddc18  c7068ccb7b00         mov dword ptr [esi], 0x7bcb8c
// 005ddc1e  c7460480cb7b00       mov dword ptr [esi + 4], 0x7bcb80
// 005ddc25  c7461078cb7b00       mov dword ptr [esi + 0x10], 0x7bcb78
// 005ddc2c  c7461468cb7b00       mov dword ptr [esi + 0x14], 0x7bcb68
// 005ddc33  c7462c58cb7b00       mov dword ptr [esi + 0x2c], 0x7bcb58
// 005ddc3a  c7464448cb7b00       mov dword ptr [esi + 0x44], 0x7bcb48
// 005ddc41  c7465c38cb7b00       mov dword ptr [esi + 0x5c], 0x7bcb38
// 005ddc48  c7467428cb7b00       mov dword ptr [esi + 0x74], 0x7bcb28
// 005ddc4f  c7868c00000018cb7b00 mov dword ptr [esi + 0x8c], 0x7bcb18
// 005ddc59  c786e800000000cb7b00 mov dword ptr [esi + 0xe8], 0x7bcb00
// 005ddc63  8bc6                 mov eax, esi
// 005ddc65  5e                   pop esi
// 005ddc66  c3                   ret 

struct BaseClass {
    void construct();
};

struct FactoryProduct : BaseClass {
    FactoryProduct();
};

FactoryProduct::FactoryProduct()
{
    construct();
    *(int*)((char*)this + 0x00) = 0x7bcb8c;
    *(int*)((char*)this + 0x04) = 0x7bcb80;
    *(int*)((char*)this + 0x10) = 0x7bcb78;
    *(int*)((char*)this + 0x14) = 0x7bcb68;
    *(int*)((char*)this + 0x2c) = 0x7bcb58;
    *(int*)((char*)this + 0x44) = 0x7bcb48;
    *(int*)((char*)this + 0x5c) = 0x7bcb38;
    *(int*)((char*)this + 0x74) = 0x7bcb28;
    *(int*)((char*)this + 0x8c) = 0x7bcb18;
    *(int*)((char*)this + 0xe8) = 0x7bcb00;
}
