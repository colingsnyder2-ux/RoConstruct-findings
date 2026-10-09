// from server: 100% by colin
// roc 2007-08 005b05c0  unit: RBX::AutoJoint  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b05c0
//
// 005b05c0  c7011c637b00         mov dword ptr [ecx], 0x7b631c
// 005b05c6  c7410414637b00       mov dword ptr [ecx + 4], 0x7b6314
// 005b05cd  c741100c637b00       mov dword ptr [ecx + 0x10], 0x7b630c
// 005b05d4  c74114fc627b00       mov dword ptr [ecx + 0x14], 0x7b62fc
// 005b05db  c7412cec627b00       mov dword ptr [ecx + 0x2c], 0x7b62ec
// 005b05e2  c74144dc627b00       mov dword ptr [ecx + 0x44], 0x7b62dc
// 005b05e9  c7415ccc627b00       mov dword ptr [ecx + 0x5c], 0x7b62cc
// 005b05f0  c74174bc627b00       mov dword ptr [ecx + 0x74], 0x7b62bc
// 005b05f7  c7818c000000ac627b00 mov dword ptr [ecx + 0x8c], 0x7b62ac
// 005b0601  c781e800000094627b00 mov dword ptr [ecx + 0xe8], 0x7b6294
// 005b060b  e9e0fdffff           jmp 0x5b03f0

struct RBX_AutoJoint {
    void construct();
};

extern "C" void __stdcall sub_5b03f0();

void RBX_AutoJoint::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b631c;
    *(int*)((char*)this + 0x04) = 0x7b6314;
    *(int*)((char*)this + 0x10) = 0x7b630c;
    *(int*)((char*)this + 0x14) = 0x7b62fc;
    *(int*)((char*)this + 0x2c) = 0x7b62ec;
    *(int*)((char*)this + 0x44) = 0x7b62dc;
    *(int*)((char*)this + 0x5c) = 0x7b62cc;
    *(int*)((char*)this + 0x74) = 0x7b62bc;
    *(int*)((char*)this + 0x8c) = 0x7b62ac;
    *(int*)((char*)this + 0xe8) = 0x7b6294;
    sub_5b03f0();
}
