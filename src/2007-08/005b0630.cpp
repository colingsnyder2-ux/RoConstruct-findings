// from server: 100% by colin
// roc 2007-08 005b0630  unit: RBX::VSnap::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0630
//
// 005b0630  c701ec637b00         mov dword ptr [ecx], 0x7b63ec
// 005b0636  c74104e4637b00       mov dword ptr [ecx + 4], 0x7b63e4
// 005b063d  c74110dc637b00       mov dword ptr [ecx + 0x10], 0x7b63dc
// 005b0644  c74114cc637b00       mov dword ptr [ecx + 0x14], 0x7b63cc
// 005b064b  c7412cbc637b00       mov dword ptr [ecx + 0x2c], 0x7b63bc
// 005b0652  c74144ac637b00       mov dword ptr [ecx + 0x44], 0x7b63ac
// 005b0659  c7415c9c637b00       mov dword ptr [ecx + 0x5c], 0x7b639c
// 005b0660  c741748c637b00       mov dword ptr [ecx + 0x74], 0x7b638c
// 005b0667  c7818c0000007c637b00 mov dword ptr [ecx + 0x8c], 0x7b637c
// 005b0671  c781e800000064637b00 mov dword ptr [ecx + 0xe8], 0x7b6364
// 005b067b  e970fdffff           jmp 0x5b03f0

struct VSnap {
    char pad[0xec];
    void ctor();
};

void VSnap::ctor() {
    *(int*)((char*)this + 0x00) = 0x7b63ec;
    *(int*)((char*)this + 0x04) = 0x7b63e4;
    *(int*)((char*)this + 0x10) = 0x7b63dc;
    *(int*)((char*)this + 0x14) = 0x7b63cc;
    *(int*)((char*)this + 0x2c) = 0x7b63bc;
    *(int*)((char*)this + 0x44) = 0x7b63ac;
    *(int*)((char*)this + 0x5c) = 0x7b639c;
    *(int*)((char*)this + 0x74) = 0x7b638c;
    *(int*)((char*)this + 0x8c) = 0x7b637c;
    *(int*)((char*)this + 0xe8) = 0x7b6364;
    extern void base_ctor();
    base_ctor();
}
