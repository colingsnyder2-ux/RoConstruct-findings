// from server: 100% by colin
// roc 2007-08 0059ea90  unit: RBX::LegacyHopperService  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ea90
//
// 0059ea90  56                   push esi
// 0059ea91  8bf1                 mov esi, ecx
// 0059ea93  e848f2ffff           call 0x59dce0
// 0059ea98  c70634267b00         mov dword ptr [esi], 0x7b2634
// 0059ea9e  c7460428267b00       mov dword ptr [esi + 4], 0x7b2628
// 0059eaa5  c7461020267b00       mov dword ptr [esi + 0x10], 0x7b2620
// 0059eaac  c7461410267b00       mov dword ptr [esi + 0x14], 0x7b2610
// 0059eab3  c7462c00267b00       mov dword ptr [esi + 0x2c], 0x7b2600
// 0059eaba  c74644f0257b00       mov dword ptr [esi + 0x44], 0x7b25f0
// 0059eac1  c7465ce0257b00       mov dword ptr [esi + 0x5c], 0x7b25e0
// 0059eac8  c74674d0257b00       mov dword ptr [esi + 0x74], 0x7b25d0
// 0059eacf  c7868c000000c0257b00 mov dword ptr [esi + 0x8c], 0x7b25c0
// 0059ead9  c786e8000000b8257b00 mov dword ptr [esi + 0xe8], 0x7b25b8
// 0059eae3  8bc6                 mov eax, esi
// 0059eae5  5e                   pop esi
// 0059eae6  c3                   ret 

struct LegacyHopperService {
    void construct();
    LegacyHopperService* init();
};

extern "C" void __fastcall sub_59dce0(LegacyHopperService* self);

LegacyHopperService* LegacyHopperService::init() {
    sub_59dce0(this);
    *(int*)((char*)this + 0x00) = 0x7b2634;
    *(int*)((char*)this + 0x04) = 0x7b2628;
    *(int*)((char*)this + 0x10) = 0x7b2620;
    *(int*)((char*)this + 0x14) = 0x7b2610;
    *(int*)((char*)this + 0x2c) = 0x7b2600;
    *(int*)((char*)this + 0x44) = 0x7b25f0;
    *(int*)((char*)this + 0x5c) = 0x7b25e0;
    *(int*)((char*)this + 0x74) = 0x7b25d0;
    *(int*)((char*)this + 0x8c) = 0x7b25c0;
    *(int*)((char*)this + 0xe8) = 0x7b25b8;
    return this;
}
