// from server: 100% by colin
// roc 2009-06 004bc3f0  unit: RBX::VPants::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bc3f0
//
// 004bc3f0  c7011c488c00         mov dword ptr [ecx], 0x8c481c
// 004bc3f6  c7411410488c00       mov dword ptr [ecx + 0x14], 0x8c4810
// 004bc3fd  c7411808488c00       mov dword ptr [ecx + 0x18], 0x8c4808
// 004bc404  c7412000488c00       mov dword ptr [ecx + 0x20], 0x8c4800
// 004bc40b  c7818c000000f8478c00 mov dword ptr [ecx + 0x8c], 0x8c47f8
// 004bc415  e9e6feffff           jmp 0x4bc300

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
