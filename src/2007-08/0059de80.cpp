// from server: 100% by colin
// roc 2007-08 0059de80  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059de80
//
// 0059de80  56                   push esi
// 0059de81  8bf1                 mov esi, ecx
// 0059de83  e8b8fcffff           call 0x59db40
// 0059de88  c706bc247b00         mov dword ptr [esi], 0x7b24bc
// 0059de8e  c74604b0247b00       mov dword ptr [esi + 4], 0x7b24b0
// 0059de95  c74610a8247b00       mov dword ptr [esi + 0x10], 0x7b24a8
// 0059de9c  c7461498247b00       mov dword ptr [esi + 0x14], 0x7b2498
// 0059dea3  c7462c88247b00       mov dword ptr [esi + 0x2c], 0x7b2488
// 0059deaa  c7464478247b00       mov dword ptr [esi + 0x44], 0x7b2478
// 0059deb1  c7465c68247b00       mov dword ptr [esi + 0x5c], 0x7b2468
// 0059deb8  c7467458247b00       mov dword ptr [esi + 0x74], 0x7b2458
// 0059debf  c7868c00000048247b00 mov dword ptr [esi + 0x8c], 0x7b2448
// 0059dec9  c786e800000040247b00 mov dword ptr [esi + 0xe8], 0x7b2440
// 0059ded3  8bc6                 mov eax, esi
// 0059ded5  5e                   pop esi
// 0059ded6  c3                   ret 

struct Base {
    void init();
};

struct S : Base {
    S* construct();
};

S* S::construct() {
    init();
    *(int*)((char*)this + 0x00) = 0x7b24bc;
    *(int*)((char*)this + 0x04) = 0x7b24b0;
    *(int*)((char*)this + 0x10) = 0x7b24a8;
    *(int*)((char*)this + 0x14) = 0x7b2498;
    *(int*)((char*)this + 0x2c) = 0x7b2488;
    *(int*)((char*)this + 0x44) = 0x7b2478;
    *(int*)((char*)this + 0x5c) = 0x7b2468;
    *(int*)((char*)this + 0x74) = 0x7b2458;
    *(int*)((char*)this + 0x8c) = 0x7b2448;
    *(int*)((char*)this + 0xe8) = 0x7b2440;
    return this;
}
