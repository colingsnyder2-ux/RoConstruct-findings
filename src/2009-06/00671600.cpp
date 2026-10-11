// from server: 100% by colin
// roc 2009-06 00671600  unit: RBX::Primitive  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671600
//
// 00671600  c701d4378e00         mov dword ptr [ecx], 0x8e37d4
// 00671606  c74114c8378e00       mov dword ptr [ecx + 0x14], 0x8e37c8
// 0067160d  c74118c0378e00       mov dword ptr [ecx + 0x18], 0x8e37c0
// 00671614  c74120b8378e00       mov dword ptr [ecx + 0x20], 0x8e37b8
// 0067161b  c7818c000000b0378e00 mov dword ptr [ecx + 0x8c], 0x8e37b0
// 00671625  e9b6e2d9ff           jmp 0x40f8e0

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
