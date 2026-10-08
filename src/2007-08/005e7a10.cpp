// from server: 58% by colin
// roc 2007-08 005e7a10  unit: RBX::VFlag::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7a10
//
// 005e7a10  d87b00               fdivr dword ptr [ebx]
// 005e7a13  c7462cbcd87b00       mov dword ptr [esi + 0x2c], 0x7bd8bc
// 005e7a1a  c74644acd87b00       mov dword ptr [esi + 0x44], 0x7bd8ac
// 005e7a21  c7465c9cd87b00       mov dword ptr [esi + 0x5c], 0x7bd89c
// 005e7a28  c746748cd87b00       mov dword ptr [esi + 0x74], 0x7bd88c
// 005e7a2f  c7868c0000007cd87b00 mov dword ptr [esi + 0x8c], 0x7bd87c
// 005e7a39  8bc6                 mov eax, esi
// 005e7a3b  5e                   pop esi
// 005e7a3c  c3                   ret 

struct RBX_VFlag_FactoryProduct {
    char pad[0x90];
    int f();
};

int RBX_VFlag_FactoryProduct::f()
{
    *(int*)((char*)this + 0x2c) = 0x7bd8bc;
    *(int*)((char*)this + 0x44) = 0x7bd8ac;
    *(int*)((char*)this + 0x5c) = 0x7bd89c;
    *(int*)((char*)this + 0x74) = 0x7bd88c;
    *(int*)((char*)this + 0x8c) = 0x7bd87c;
    return (int)this;
}
