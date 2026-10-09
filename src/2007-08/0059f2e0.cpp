// from server: 96% by colin
// roc 2007-08 0059f2e0  unit: RBX::VHopperBin::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f2e0
//
// 0059f2e0  c7019c2d7b00         mov dword ptr [ecx], 0x7b2d9c
// 0059f2e6  c74104902d7b00       mov dword ptr [ecx + 4], 0x7b2d90
// 0059f2ed  c74110882d7b00       mov dword ptr [ecx + 0x10], 0x7b2d88
// 0059f2f4  c74114782d7b00       mov dword ptr [ecx + 0x14], 0x7b2d78
// 0059f2fb  c7412c682d7b00       mov dword ptr [ecx + 0x2c], 0x7b2d68
// 0059f302  c74144582d7b00       mov dword ptr [ecx + 0x44], 0x7b2d58
// 0059f309  c7415c482d7b00       mov dword ptr [ecx + 0x5c], 0x7b2d48
// 0059f310  c74174382d7b00       mov dword ptr [ecx + 0x74], 0x7b2d38
// 0059f317  c7818c000000282d7b00 mov dword ptr [ecx + 0x8c], 0x7b2d28
// 0059f321  c781e8000000202d7b00 mov dword ptr [ecx + 0xe8], 0x7b2d20
// 0059f32b  e930dce6ff           jmp 0x40cf60
// 0059f330  e9abffffff           jmp 0x59f2e0

struct S {
    char pad[0x100];
    void ctor();
};

void S::ctor()
{
    *(int*)((char*)this + 0x00) = 0x7b2d9c;
    *(int*)((char*)this + 0x04) = 0x7b2d90;
    *(int*)((char*)this + 0x10) = 0x7b2d88;
    *(int*)((char*)this + 0x14) = 0x7b2d78;
    *(int*)((char*)this + 0x2c) = 0x7b2d68;
    *(int*)((char*)this + 0x44) = 0x7b2d58;
    *(int*)((char*)this + 0x5c) = 0x7b2d48;
    *(int*)((char*)this + 0x74) = 0x7b2d38;
    *(int*)((char*)this + 0x8c) = 0x7b2d28;
    *(int*)((char*)this + 0xe8) = 0x7b2d20;
    extern void base_ctor();
    base_ctor();
}
