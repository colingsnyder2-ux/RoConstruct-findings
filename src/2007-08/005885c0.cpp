// from server: 100% by colin
// roc 2007-08 005885c0  unit: RBX::SoundChannel  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005885c0
//
// 005885c0  c701cceb7a00         mov dword ptr [ecx], 0x7aebcc
// 005885c6  c74104c0eb7a00       mov dword ptr [ecx + 4], 0x7aebc0
// 005885cd  c74110b8eb7a00       mov dword ptr [ecx + 0x10], 0x7aebb8
// 005885d4  c74114a8eb7a00       mov dword ptr [ecx + 0x14], 0x7aeba8
// 005885db  c7412c98eb7a00       mov dword ptr [ecx + 0x2c], 0x7aeb98
// 005885e2  c7414488eb7a00       mov dword ptr [ecx + 0x44], 0x7aeb88
// 005885e9  c7415c78eb7a00       mov dword ptr [ecx + 0x5c], 0x7aeb78
// 005885f0  c7417468eb7a00       mov dword ptr [ecx + 0x74], 0x7aeb68
// 005885f7  c7818c00000058eb7a00 mov dword ptr [ecx + 0x8c], 0x7aeb58
// 00588601  c781e80000004ceb7a00 mov dword ptr [ecx + 0xe8], 0x7aeb4c
// 0058860b  e900feffff           jmp 0x588410

struct SoundChannel {
    void construct();
};

extern char G1_007aebcc;
extern char G2_007aebc0;
extern char G3_007aebb8;
extern char G4_007aeba8;
extern char G5_007aeb98;
extern char G6_007aeb88;
extern char G7_007aeb78;
extern char G8_007aeb68;
extern char G9_007aeb58;
extern char G10_007aeb4c;

void func_00588410();

void SoundChannel::construct()
{
    *(void**)((char*)this + 0) = &G1_007aebcc;
    *(void**)((char*)this + 4) = &G2_007aebc0;
    *(void**)((char*)this + 0x10) = &G3_007aebb8;
    *(void**)((char*)this + 0x14) = &G4_007aeba8;
    *(void**)((char*)this + 0x2c) = &G5_007aeb98;
    *(void**)((char*)this + 0x44) = &G6_007aeb88;
    *(void**)((char*)this + 0x5c) = &G7_007aeb78;
    *(void**)((char*)this + 0x74) = &G8_007aeb68;
    *(void**)((char*)this + 0x8c) = &G9_007aeb58;
    *(void**)((char*)this + 0xe8) = &G10_007aeb4c;
    func_00588410();
}
