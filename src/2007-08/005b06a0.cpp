// from server: 100% by colin
// roc 2007-08 005b06a0  unit: RBX::VWeld::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b06a0
//
// 005b06a0  c701bc647b00         mov dword ptr [ecx], 0x7b64bc
// 005b06a6  c74104b4647b00       mov dword ptr [ecx + 4], 0x7b64b4
// 005b06ad  c74110ac647b00       mov dword ptr [ecx + 0x10], 0x7b64ac
// 005b06b4  c741149c647b00       mov dword ptr [ecx + 0x14], 0x7b649c
// 005b06bb  c7412c8c647b00       mov dword ptr [ecx + 0x2c], 0x7b648c
// 005b06c2  c741447c647b00       mov dword ptr [ecx + 0x44], 0x7b647c
// 005b06c9  c7415c6c647b00       mov dword ptr [ecx + 0x5c], 0x7b646c
// 005b06d0  c741745c647b00       mov dword ptr [ecx + 0x74], 0x7b645c
// 005b06d7  c7818c0000004c647b00 mov dword ptr [ecx + 0x8c], 0x7b644c
// 005b06e1  c781e800000034647b00 mov dword ptr [ecx + 0xe8], 0x7b6434
// 005b06eb  e900fdffff           jmp 0x5b03f0

struct VWeld {
    char pad[0x100];
    void ctor();
};

void VWeld::ctor()
{
    *(int*)((char*)this + 0x00) = 0x7b64bc;
    *(int*)((char*)this + 0x04) = 0x7b64b4;
    *(int*)((char*)this + 0x10) = 0x7b64ac;
    *(int*)((char*)this + 0x14) = 0x7b649c;
    *(int*)((char*)this + 0x2c) = 0x7b648c;
    *(int*)((char*)this + 0x44) = 0x7b647c;
    *(int*)((char*)this + 0x5c) = 0x7b646c;
    *(int*)((char*)this + 0x74) = 0x7b645c;
    *(int*)((char*)this + 0x8c) = 0x7b644c;
    *(int*)((char*)this + 0xe8) = 0x7b6434;
    extern void base_ctor_005b03f0();
    base_ctor_005b03f0();
}
