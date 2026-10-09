// from server: 100% by colin
// roc 2007-08 0049c440  unit: RBX::Network::VServer::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c440
//
// 0049c440  56                   push esi
// 0049c441  8bf1                 mov esi, ecx
// 0049c443  e828540100           call 0x4b1870
// 0049c448  c7064cc67900         mov dword ptr [esi], 0x79c64c
// 0049c44e  c7460440c67900       mov dword ptr [esi + 4], 0x79c640
// 0049c455  c7461038c67900       mov dword ptr [esi + 0x10], 0x79c638
// 0049c45c  c7461428c67900       mov dword ptr [esi + 0x14], 0x79c628
// 0049c463  c7462c18c67900       mov dword ptr [esi + 0x2c], 0x79c618
// 0049c46a  c7464408c67900       mov dword ptr [esi + 0x44], 0x79c608
// 0049c471  c7465cf8c57900       mov dword ptr [esi + 0x5c], 0x79c5f8
// 0049c478  c74674e8c57900       mov dword ptr [esi + 0x74], 0x79c5e8
// 0049c47f  c7868c000000d8c57900 mov dword ptr [esi + 0x8c], 0x79c5d8
// 0049c489  c786e8000000a8c57900 mov dword ptr [esi + 0xe8], 0x79c5a8
// 0049c493  c786ec0000009cc57900 mov dword ptr [esi + 0xec], 0x79c59c
// 0049c49d  8bc6                 mov eax, esi
// 0049c49f  5e                   pop esi
// 0049c4a0  c3                   ret 

struct RBX_Network_VServer_FactoryProduct {
    RBX_Network_VServer_FactoryProduct* construct();
};

extern void base_ctor_004b1870();

RBX_Network_VServer_FactoryProduct* RBX_Network_VServer_FactoryProduct::construct()
{
    base_ctor_004b1870();
    *(int*)((char*)this + 0x00) = 0x79c64c;
    *(int*)((char*)this + 0x04) = 0x79c640;
    *(int*)((char*)this + 0x10) = 0x79c638;
    *(int*)((char*)this + 0x14) = 0x79c628;
    *(int*)((char*)this + 0x2c) = 0x79c618;
    *(int*)((char*)this + 0x44) = 0x79c608;
    *(int*)((char*)this + 0x5c) = 0x79c5f8;
    *(int*)((char*)this + 0x74) = 0x79c5e8;
    *(int*)((char*)this + 0x8c) = 0x79c5d8;
    *(int*)((char*)this + 0xe8) = 0x79c5a8;
    *(int*)((char*)this + 0xec) = 0x79c59c;
    return this;
}
