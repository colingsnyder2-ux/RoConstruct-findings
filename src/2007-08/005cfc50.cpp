// from server: 100% by colin
// roc 2007-08 005cfc50  unit: RBX::Network::VPlayer::?$Listener  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cfc50
//
// 005cfc50  c701eca67b00         mov dword ptr [ecx], 0x7ba6ec
// 005cfc56  c74104e4a67b00       mov dword ptr [ecx + 4], 0x7ba6e4
// 005cfc5d  c74110dca67b00       mov dword ptr [ecx + 0x10], 0x7ba6dc
// 005cfc64  c74114cca67b00       mov dword ptr [ecx + 0x14], 0x7ba6cc
// 005cfc6b  c7412cbca67b00       mov dword ptr [ecx + 0x2c], 0x7ba6bc
// 005cfc72  c74144aca67b00       mov dword ptr [ecx + 0x44], 0x7ba6ac
// 005cfc79  c7415c9ca67b00       mov dword ptr [ecx + 0x5c], 0x7ba69c
// 005cfc80  c741748ca67b00       mov dword ptr [ecx + 0x74], 0x7ba68c
// 005cfc87  c7818c0000007ca67b00 mov dword ptr [ecx + 0x8c], 0x7ba67c
// 005cfc91  c781e800000074a67b00 mov dword ptr [ecx + 0xe8], 0x7ba674
// 005cfc9b  e9c0d2e3ff           jmp 0x40cf60

struct VPlayerListener {
    void ctor();
};

void VPlayerListener::ctor()
{
    *(int*)((char*)this + 0x00) = 0x7ba6ec;
    *(int*)((char*)this + 0x04) = 0x7ba6e4;
    *(int*)((char*)this + 0x10) = 0x7ba6dc;
    *(int*)((char*)this + 0x14) = 0x7ba6cc;
    *(int*)((char*)this + 0x2c) = 0x7ba6bc;
    *(int*)((char*)this + 0x44) = 0x7ba6ac;
    *(int*)((char*)this + 0x5c) = 0x7ba69c;
    *(int*)((char*)this + 0x74) = 0x7ba68c;
    *(int*)((char*)this + 0x8c) = 0x7ba67c;
    *(int*)((char*)this + 0xe8) = 0x7ba674;
    extern void __cdecl func_0040cf60();
    func_0040cf60();
}
