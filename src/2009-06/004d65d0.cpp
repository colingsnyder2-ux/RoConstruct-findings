// from server: 100% by colin
// roc 2009-06 004d65d0  unit: RBX::Network::Server  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d65d0
//
// 004d65d0  c701b45f8c00         mov dword ptr [ecx], 0x8c5fb4
// 004d65d6  c74114a45f8c00       mov dword ptr [ecx + 0x14], 0x8c5fa4
// 004d65dd  c741189c5f8c00       mov dword ptr [ecx + 0x18], 0x8c5f9c
// 004d65e4  c74120945f8c00       mov dword ptr [ecx + 0x20], 0x8c5f94
// 004d65eb  c7818c000000645f8c00 mov dword ptr [ecx + 0x8c], 0x8c5f64
// 004d65f5  e9d6b50000           jmp 0x4e1bd0

struct LocalBackpackTool {
    void construct();
};

extern "C" void __stdcall sub_40F8E0();

void LocalBackpackTool::construct()
{
    *(int*)((char*)this + 0x00) = 0x8e9084;
    *(int*)((char*)this + 0x14) = 0x8e9074;
    *(int*)((char*)this + 0x18) = 0x8e906c;
    *(int*)((char*)this + 0x20) = 0x8e9064;
    *(int*)((char*)this + 0x8c) = 0x8e905c;
    sub_40F8E0();
}
