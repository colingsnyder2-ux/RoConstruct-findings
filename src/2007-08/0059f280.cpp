// from server: 100% by colin
// roc 2007-08 0059f280  unit: RBX::VHopperBin::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f280
//
// 0059f280  56                   push esi
// 0059f281  8bf1                 mov esi, ecx
// 0059f283  e848deffff           call 0x59d0d0
// 0059f288  c7069c2d7b00         mov dword ptr [esi], 0x7b2d9c
// 0059f28e  c74604902d7b00       mov dword ptr [esi + 4], 0x7b2d90
// 0059f295  c74610882d7b00       mov dword ptr [esi + 0x10], 0x7b2d88
// 0059f29c  c74614782d7b00       mov dword ptr [esi + 0x14], 0x7b2d78
// 0059f2a3  c7462c682d7b00       mov dword ptr [esi + 0x2c], 0x7b2d68
// 0059f2aa  c74644582d7b00       mov dword ptr [esi + 0x44], 0x7b2d58
// 0059f2b1  c7465c482d7b00       mov dword ptr [esi + 0x5c], 0x7b2d48
// 0059f2b8  c74674382d7b00       mov dword ptr [esi + 0x74], 0x7b2d38
// 0059f2bf  c7868c000000282d7b00 mov dword ptr [esi + 0x8c], 0x7b2d28
// 0059f2c9  c786e8000000202d7b00 mov dword ptr [esi + 0xe8], 0x7b2d20
// 0059f2d3  8bc6                 mov eax, esi
// 0059f2d5  5e                   pop esi
// 0059f2d6  c3                   ret 

struct RBX_VHopperBin_FactoryProduct {
    void* construct();
};

extern "C" void __fastcall sub_59d0d0(void*);

void* RBX_VHopperBin_FactoryProduct::construct()
{
    sub_59d0d0(this);
    *(int*)((char*)this + 0x00) = 0x7b2d9c;
    *(int*)((char*)this + 0x04) = 0x7b2d90;
    *(int*)((char*)this + 0x10) = 0x7b2d88;
    *(int*)((char*)this + 0x14) = 0x7b2d78;
    *(int*)((char*)this + 0x2c) = 0x7b2d68;
    *(int*)((char*)this + 0x44) = 0x7b2d58;
    *(int*)((char*)this + 0x5c) = 0x7b2d48;
    *(int*)((char*)this + 0x74) = 0x7b2d38;
    *(int*)((char*)this + 0x8c) = 0x7b2d28;
    *(int*)((char*)this + 0xe8) = 0x7b2d20;
    return this;
}
