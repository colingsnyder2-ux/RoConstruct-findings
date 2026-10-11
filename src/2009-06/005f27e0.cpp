// from server: 100% by colin
// roc 2009-06 005f27e0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f27e0
//
// 005f27e0  c7018c628d00         mov dword ptr [ecx], 0x8d628c
// 005f27e6  c741147c628d00       mov dword ptr [ecx + 0x14], 0x8d627c
// 005f27ed  c7411874628d00       mov dword ptr [ecx + 0x18], 0x8d6274
// 005f27f4  c741206c628d00       mov dword ptr [ecx + 0x20], 0x8d626c
// 005f27fb  c7818c00000064628d00 mov dword ptr [ecx + 0x8c], 0x8d6264
// 005f2805  e9d6d0e1ff           jmp 0x40f8e0

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
