// from server: 100% by colin
// roc 2007-08 005b1c90  unit: RBX::VWeld::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1c90
//
// 005b1c90  8b442404             mov eax, dword ptr [esp + 4]
// 005b1c94  56                   push esi
// 005b1c95  50                   push eax
// 005b1c96  8bf1                 mov esi, ecx
// 005b1c98  e8b3faffff           call 0x5b1750
// 005b1c9d  c706b4737b00         mov dword ptr [esi], 0x7b73b4
// 005b1ca3  c74604ac737b00       mov dword ptr [esi + 4], 0x7b73ac
// 005b1caa  c74610a4737b00       mov dword ptr [esi + 0x10], 0x7b73a4
// 005b1cb1  c7461494737b00       mov dword ptr [esi + 0x14], 0x7b7394
// 005b1cb8  c7462c84737b00       mov dword ptr [esi + 0x2c], 0x7b7384
// 005b1cbf  c7464474737b00       mov dword ptr [esi + 0x44], 0x7b7374
// 005b1cc6  c7465c64737b00       mov dword ptr [esi + 0x5c], 0x7b7364
// 005b1ccd  c7467454737b00       mov dword ptr [esi + 0x74], 0x7b7354
// 005b1cd4  c7868c00000044737b00 mov dword ptr [esi + 0x8c], 0x7b7344
// 005b1cde  c786e80000002c737b00 mov dword ptr [esi + 0xe8], 0x7b732c
// 005b1ce8  8bc6                 mov eax, esi
// 005b1cea  5e                   pop esi
// 005b1ceb  c20400               ret 4

struct VWeld {
    char pad[0x100];
    void construct(int);
    VWeld* init(int);
};

VWeld* VWeld::init(int arg) {
    construct(arg);
    *(int*)((char*)this + 0x00) = 0x7b73b4;
    *(int*)((char*)this + 0x04) = 0x7b73ac;
    *(int*)((char*)this + 0x10) = 0x7b73a4;
    *(int*)((char*)this + 0x14) = 0x7b7394;
    *(int*)((char*)this + 0x2c) = 0x7b7384;
    *(int*)((char*)this + 0x44) = 0x7b7374;
    *(int*)((char*)this + 0x5c) = 0x7b7364;
    *(int*)((char*)this + 0x74) = 0x7b7354;
    *(int*)((char*)this + 0x8c) = 0x7b7344;
    *(int*)((char*)this + 0xe8) = 0x7b732c;
    return this;
}
