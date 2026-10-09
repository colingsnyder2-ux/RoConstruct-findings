// from server: 100% by colin
// roc 2007-08 005b8e70  unit: RBX::VDecal::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8e70
//
// 005b8e70  56                   push esi
// 005b8e71  8bf1                 mov esi, ecx
// 005b8e73  e868ffffff           call 0x5b8de0
// 005b8e78  c706a48c7b00         mov dword ptr [esi], 0x7b8ca4
// 005b8e7e  c746049c8c7b00       mov dword ptr [esi + 4], 0x7b8c9c
// 005b8e85  c74610948c7b00       mov dword ptr [esi + 0x10], 0x7b8c94
// 005b8e8c  c74614848c7b00       mov dword ptr [esi + 0x14], 0x7b8c84
// 005b8e93  c7462c748c7b00       mov dword ptr [esi + 0x2c], 0x7b8c74
// 005b8e9a  c74644648c7b00       mov dword ptr [esi + 0x44], 0x7b8c64
// 005b8ea1  c7465c548c7b00       mov dword ptr [esi + 0x5c], 0x7b8c54
// 005b8ea8  c74674448c7b00       mov dword ptr [esi + 0x74], 0x7b8c44
// 005b8eaf  c7868c000000348c7b00 mov dword ptr [esi + 0x8c], 0x7b8c34
// 005b8eb9  c786e800000005000000 mov dword ptr [esi + 0xe8], 5
// 005b8ec3  8bc6                 mov eax, esi
// 005b8ec5  5e                   pop esi
// 005b8ec6  c3                   ret 

struct VDecalFactoryProduct {
    char pad[0xe8];
    int field_e8;
    VDecalFactoryProduct();
};

extern "C" void __fastcall sub_5b8de0(VDecalFactoryProduct* self);

VDecalFactoryProduct::VDecalFactoryProduct()
{
    sub_5b8de0(this);
    *(int*)((char*)this + 0x00) = 0x7b8ca4;
    *(int*)((char*)this + 0x04) = 0x7b8c9c;
    *(int*)((char*)this + 0x10) = 0x7b8c94;
    *(int*)((char*)this + 0x14) = 0x7b8c84;
    *(int*)((char*)this + 0x2c) = 0x7b8c74;
    *(int*)((char*)this + 0x44) = 0x7b8c64;
    *(int*)((char*)this + 0x5c) = 0x7b8c54;
    *(int*)((char*)this + 0x74) = 0x7b8c44;
    *(int*)((char*)this + 0x8c) = 0x7b8c34;
    *(int*)((char*)this + 0xe8) = 5;
}
