// from server: 100% by colin
// roc 2007-08 0059eb00  unit: RBX::VStarterPackService::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059eb00
//
// 0059eb00  56                   push esi
// 0059eb01  8bf1                 mov esi, ecx
// 0059eb03  e8b8f2ffff           call 0x59ddc0
// 0059eb08  c7061c277b00         mov dword ptr [esi], 0x7b271c
// 0059eb0e  c7460410277b00       mov dword ptr [esi + 4], 0x7b2710
// 0059eb15  c7461008277b00       mov dword ptr [esi + 0x10], 0x7b2708
// 0059eb1c  c74614f8267b00       mov dword ptr [esi + 0x14], 0x7b26f8
// 0059eb23  c7462ce8267b00       mov dword ptr [esi + 0x2c], 0x7b26e8
// 0059eb2a  c74644d8267b00       mov dword ptr [esi + 0x44], 0x7b26d8
// 0059eb31  c7465cc8267b00       mov dword ptr [esi + 0x5c], 0x7b26c8
// 0059eb38  c74674b8267b00       mov dword ptr [esi + 0x74], 0x7b26b8
// 0059eb3f  c7868c000000a8267b00 mov dword ptr [esi + 0x8c], 0x7b26a8
// 0059eb49  c786e8000000a0267b00 mov dword ptr [esi + 0xe8], 0x7b26a0
// 0059eb53  8bc6                 mov eax, esi
// 0059eb55  5e                   pop esi
// 0059eb56  c3                   ret 

struct FactoryProduct {
    void construct();
    FactoryProduct* init();
};

FactoryProduct* FactoryProduct::init()
{
    construct();
    *(int*)((char*)this + 0) = 0x7b271c;
    *(int*)((char*)this + 4) = 0x7b2710;
    *(int*)((char*)this + 0x10) = 0x7b2708;
    *(int*)((char*)this + 0x14) = 0x7b26f8;
    *(int*)((char*)this + 0x2c) = 0x7b26e8;
    *(int*)((char*)this + 0x44) = 0x7b26d8;
    *(int*)((char*)this + 0x5c) = 0x7b26c8;
    *(int*)((char*)this + 0x74) = 0x7b26b8;
    *(int*)((char*)this + 0x8c) = 0x7b26a8;
    *(int*)((char*)this + 0xe8) = 0x7b26a0;
    return this;
}
