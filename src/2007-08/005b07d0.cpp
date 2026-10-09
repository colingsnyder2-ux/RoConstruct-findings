// from server: 100% by colin
// roc 2007-08 005b07d0  unit: RBX::VRotate::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b07d0
//
// 005b07d0  c7015c667b00         mov dword ptr [ecx], 0x7b665c
// 005b07d6  c7410454667b00       mov dword ptr [ecx + 4], 0x7b6654
// 005b07dd  c741104c667b00       mov dword ptr [ecx + 0x10], 0x7b664c
// 005b07e4  c741143c667b00       mov dword ptr [ecx + 0x14], 0x7b663c
// 005b07eb  c7412c2c667b00       mov dword ptr [ecx + 0x2c], 0x7b662c
// 005b07f2  c741441c667b00       mov dword ptr [ecx + 0x44], 0x7b661c
// 005b07f9  c7415c0c667b00       mov dword ptr [ecx + 0x5c], 0x7b660c
// 005b0800  c74174fc657b00       mov dword ptr [ecx + 0x74], 0x7b65fc
// 005b0807  c7818c000000ec657b00 mov dword ptr [ecx + 0x8c], 0x7b65ec
// 005b0811  c781e8000000d4657b00 mov dword ptr [ecx + 0xe8], 0x7b65d4
// 005b081b  e9d0fbffff           jmp 0x5b03f0

struct RBX_VRotate_FactoryProduct {
    void construct();
};

void RBX_VRotate_FactoryProduct::construct() {
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x00) = 0x7b665c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x04) = 0x7b6654;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10) = 0x7b664c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x14) = 0x7b663c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x2c) = 0x7b662c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x44) = 0x7b661c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x5c) = 0x7b660c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x74) = 0x7b65fc;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x8c) = 0x7b65ec;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xe8) = 0x7b65d4;
    extern void tail_call();
    tail_call();
}
