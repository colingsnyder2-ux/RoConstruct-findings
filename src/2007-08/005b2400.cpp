// from server: 54% by colin
// roc 2007-08 005b2400  unit: RBX::VWeld::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2400
//
// 005b2400  8b442404             mov eax, dword ptr [esp + 4]
// 005b2404  56                   push esi
// 005b2405  50                   push eax
// 005b2406  8bf1                 mov esi, ecx
// 005b2408  e8a3f9ffff           call 0x5b1db0
// 005b240d  c7060c7b7b00         mov dword ptr [esi], 0x7b7b0c
// 005b2413  c74604047b7b00       mov dword ptr [esi + 4], 0x7b7b04
// 005b241a  c74610fc7a7b00       mov dword ptr [esi + 0x10], 0x7b7afc
// 005b2421  c74614ec7a7b00       mov dword ptr [esi + 0x14], 0x7b7aec
// 005b2428  c7462cdc7a7b00       mov dword ptr [esi + 0x2c], 0x7b7adc
// 005b242f  c74644cc7a7b00       mov dword ptr [esi + 0x44], 0x7b7acc
// 005b2436  c7465cbc7a7b00       mov dword ptr [esi + 0x5c], 0x7b7abc
// 005b243d  c74674ac7a7b00       mov dword ptr [esi + 0x74], 0x7b7aac
// 005b2444  c7868c0000009c7a7b00 mov dword ptr [esi + 0x8c], 0x7b7a9c
// 005b244e  c786e8000000847a7b00 mov dword ptr [esi + 0xe8], 0x7b7a84
// 005b2458  8bc6                 mov eax, esi
// 005b245a  5e                   pop esi
// 005b245b  c20400               ret 4

struct RBX_VWeld_FactoryProduct {
    char pad[0x100];
    void construct(int);
};

void RBX_VWeld_FactoryProduct::construct(int)
{
    *(int*)((char*)this + 0x00) = 0x7b7b0c;
    *(int*)((char*)this + 0x04) = 0x7b7b04;
    *(int*)((char*)this + 0x10) = 0x7b7afc;
    *(int*)((char*)this + 0x14) = 0x7b7aec;
    *(int*)((char*)this + 0x2c) = 0x7b7adc;
    *(int*)((char*)this + 0x44) = 0x7b7acc;
    *(int*)((char*)this + 0x5c) = 0x7b7abc;
    *(int*)((char*)this + 0x74) = 0x7b7aac;
    *(int*)((char*)this + 0x8c) = 0x7b7a9c;
    *(int*)((char*)this + 0xe8) = 0x7b7a84;
}
