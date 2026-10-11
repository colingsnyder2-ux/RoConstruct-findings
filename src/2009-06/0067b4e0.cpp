// from server: 100% by colin
// roc 2009-06 0067b4e0  unit: RBX::VGlue::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b4e0
//
// 0067b4e0  c701ac508e00         mov dword ptr [ecx], 0x8e50ac
// 0067b4e6  c741149c508e00       mov dword ptr [ecx + 0x14], 0x8e509c
// 0067b4ed  c7411894508e00       mov dword ptr [ecx + 0x18], 0x8e5094
// 0067b4f4  c741208c508e00       mov dword ptr [ecx + 0x20], 0x8e508c
// 0067b4fb  c7818c00000074508e00 mov dword ptr [ecx + 0x8c], 0x8e5074
// 0067b505  e956feffff           jmp 0x67b360

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
