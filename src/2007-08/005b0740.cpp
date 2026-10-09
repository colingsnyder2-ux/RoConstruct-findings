// from server: 93% by colin
// roc 2007-08 005b0740  unit: RBX::VGlue::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0740
//
// 005b0740  c7018c657b00         mov dword ptr [ecx], 0x7b658c
// 005b0746  c7410484657b00       mov dword ptr [ecx + 4], 0x7b6584
// 005b074d  c741107c657b00       mov dword ptr [ecx + 0x10], 0x7b657c
// 005b0754  c741146c657b00       mov dword ptr [ecx + 0x14], 0x7b656c
// 005b075b  c7412c5c657b00       mov dword ptr [ecx + 0x2c], 0x7b655c
// 005b0762  c741444c657b00       mov dword ptr [ecx + 0x44], 0x7b654c
// 005b0769  c7415c3c657b00       mov dword ptr [ecx + 0x5c], 0x7b653c
// 005b0770  c741742c657b00       mov dword ptr [ecx + 0x74], 0x7b652c
// 005b0777  c7818c0000001c657b00 mov dword ptr [ecx + 0x8c], 0x7b651c
// 005b0781  c781e800000004657b00 mov dword ptr [ecx + 0xe8], 0x7b6504
// 005b078b  e960fcffff           jmp 0x5b03f0

struct FactoryProduct {
    void construct();
};

void FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b658c;
    *(int*)((char*)this + 0x04) = 0x7b6584;
    *(int*)((char*)this + 0x10) = 0x7b657c;
    *(int*)((char*)this + 0x14) = 0x7b656c;
    *(int*)((char*)this + 0x2c) = 0x7b655c;
    *(int*)((char*)this + 0x44) = 0x7b654c;
    *(int*)((char*)this + 0x5c) = 0x7b653c;
    *(int*)((char*)this + 0x74) = 0x7b652c;
    *(int*)((char*)this + 0x8c) = 0x7b651c;
    *(int*)((char*)this + 0xe8) = 0x7b6504;
    ((void (__thiscall*)(FactoryProduct*))0x5b03f0)(this);
}
