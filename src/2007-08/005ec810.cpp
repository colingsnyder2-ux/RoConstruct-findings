// from server: 100% by colin
// roc 2007-08 005ec810  unit: RBX::VBodyPosition::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec810
//
// 005ec810  c701e4ea7b00         mov dword ptr [ecx], 0x7beae4
// 005ec816  c74104dcea7b00       mov dword ptr [ecx + 4], 0x7beadc
// 005ec81d  c74110d4ea7b00       mov dword ptr [ecx + 0x10], 0x7bead4
// 005ec824  c74114c4ea7b00       mov dword ptr [ecx + 0x14], 0x7beac4
// 005ec82b  c7412cb4ea7b00       mov dword ptr [ecx + 0x2c], 0x7beab4
// 005ec832  c74144a4ea7b00       mov dword ptr [ecx + 0x44], 0x7beaa4
// 005ec839  c7415c94ea7b00       mov dword ptr [ecx + 0x5c], 0x7bea94
// 005ec840  c7417484ea7b00       mov dword ptr [ecx + 0x74], 0x7bea84
// 005ec847  c7818c00000074ea7b00 mov dword ptr [ecx + 0x8c], 0x7bea74
// 005ec851  c781e80000005cea7b00 mov dword ptr [ecx + 0xe8], 0x7bea5c
// 005ec85b  c781f000000050ea7b00 mov dword ptr [ecx + 0xf0], 0x7bea50
// 005ec865  e9e6edffff           jmp 0x5eb650

struct RBX_VBodyPosition_FactoryProduct {
    void construct();
};

extern "C" void __stdcall tail_call_5eb650();

void RBX_VBodyPosition_FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7beae4;
    *(int*)((char*)this + 0x04) = 0x7beadc;
    *(int*)((char*)this + 0x10) = 0x7bead4;
    *(int*)((char*)this + 0x14) = 0x7beac4;
    *(int*)((char*)this + 0x2c) = 0x7beab4;
    *(int*)((char*)this + 0x44) = 0x7beaa4;
    *(int*)((char*)this + 0x5c) = 0x7bea94;
    *(int*)((char*)this + 0x74) = 0x7bea84;
    *(int*)((char*)this + 0x8c) = 0x7bea74;
    *(int*)((char*)this + 0xe8) = 0x7bea5c;
    *(int*)((char*)this + 0xf0) = 0x7bea50;
    tail_call_5eb650();
}
