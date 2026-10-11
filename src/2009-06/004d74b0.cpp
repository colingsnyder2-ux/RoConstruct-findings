// from server: 100% by colin
// roc 2009-06 004d74b0  unit: RBX::VMessage::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d74b0
//
// 004d74b0  c7014c618c00         mov dword ptr [ecx], 0x8c614c
// 004d74b6  c7411440618c00       mov dword ptr [ecx + 0x14], 0x8c6140
// 004d74bd  c7411838618c00       mov dword ptr [ecx + 0x18], 0x8c6138
// 004d74c4  c7412030618c00       mov dword ptr [ecx + 0x20], 0x8c6130
// 004d74cb  c7818c00000018618c00 mov dword ptr [ecx + 0x8c], 0x8c6118
// 004d74d5  e9a6feffff           jmp 0x4d7380

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
