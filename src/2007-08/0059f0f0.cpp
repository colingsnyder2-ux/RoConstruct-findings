// from server: 100% by colin
// roc 2007-08 0059f0f0  unit: RBX::VHopperBin::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f0f0
//
// 0059f0f0  56                   push esi
// 0059f0f1  8bf1                 mov esi, ecx
// 0059f0f3  e848ffffff           call 0x59f040
// 0059f0f8  c7062c2b7b00         mov dword ptr [esi], 0x7b2b2c
// 0059f0fe  c74604202b7b00       mov dword ptr [esi + 4], 0x7b2b20
// 0059f105  c74610182b7b00       mov dword ptr [esi + 0x10], 0x7b2b18
// 0059f10c  c74614082b7b00       mov dword ptr [esi + 0x14], 0x7b2b08
// 0059f113  c7462cf82a7b00       mov dword ptr [esi + 0x2c], 0x7b2af8
// 0059f11a  c74644e82a7b00       mov dword ptr [esi + 0x44], 0x7b2ae8
// 0059f121  c7465cd82a7b00       mov dword ptr [esi + 0x5c], 0x7b2ad8
// 0059f128  c74674c82a7b00       mov dword ptr [esi + 0x74], 0x7b2ac8
// 0059f12f  c7868c000000b82a7b00 mov dword ptr [esi + 0x8c], 0x7b2ab8
// 0059f139  c786e8000000b02a7b00 mov dword ptr [esi + 0xe8], 0x7b2ab0
// 0059f143  8bc6                 mov eax, esi
// 0059f145  5e                   pop esi
// 0059f146  c3                   ret 

struct RBX_VHopperBin_FactoryProduct {
    char pad0[0x8c];
    int field_8c;
    char pad90[0x58];
    int field_e8;
    RBX_VHopperBin_FactoryProduct* ctor();
};

extern "C" void __fastcall sub_59f040(void*);

RBX_VHopperBin_FactoryProduct* RBX_VHopperBin_FactoryProduct::ctor()
{
    sub_59f040(this);
    *(int*)((char*)this + 0x00) = 0x7b2b2c;
    *(int*)((char*)this + 0x04) = 0x7b2b20;
    *(int*)((char*)this + 0x10) = 0x7b2b18;
    *(int*)((char*)this + 0x14) = 0x7b2b08;
    *(int*)((char*)this + 0x2c) = 0x7b2af8;
    *(int*)((char*)this + 0x44) = 0x7b2ae8;
    *(int*)((char*)this + 0x5c) = 0x7b2ad8;
    *(int*)((char*)this + 0x74) = 0x7b2ac8;
    *(int*)((char*)this + 0x8c) = 0x7b2ab8;
    *(int*)((char*)this + 0xe8) = 0x7b2ab0;
    return this;
}
