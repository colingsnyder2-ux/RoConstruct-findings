// from server: 100% by colin
// roc 2007-08 004b87c0  unit: RakPeerInterface  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b87c0
//
// 004b87c0  56                   push esi
// 004b87c1  8b742408             mov esi, dword ptr [esp + 8]
// 004b87c5  8d461c               lea eax, [esi + 0x1c]
// 004b87c8  50                   push eax
// 004b87c9  ff15d0e67700         call dword ptr [0x77e6d0]
// 004b87cf  83c404               add esp, 4
// 004b87d2  8d481c               lea ecx, [eax + 0x1c]
// 004b87d5  89700c               mov dword ptr [eax + 0xc], esi
// 004b87d8  894814               mov dword ptr [eax + 0x14], ecx
// 004b87db  c6401800             mov byte ptr [eax + 0x18], 0
// 004b87df  5e                   pop esi
// 004b87e0  c3                   ret 

struct RakPeerInterface {
    char pad[0x1c];
};

extern "C" void* (__cdecl* mallocPtr)(unsigned int);

RakPeerInterface* __cdecl createRakPeer(RakPeerInterface* peer) {
    RakPeerInterface* result = (RakPeerInterface*)mallocPtr((unsigned int)(peer->pad + 0x1c));
    *(RakPeerInterface**)(result->pad + 0xc) = peer;
    *(RakPeerInterface**)(result->pad + 0x14) = (RakPeerInterface*)(result->pad + 0x1c);
    result->pad[0x18] = 0;
    return result;
}
