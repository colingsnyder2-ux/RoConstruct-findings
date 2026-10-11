// from server: 100% by colin
// roc 2009-06 005f23f0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f23f0
//
// 005f23f0  c701c4618d00         mov dword ptr [ecx], 0x8d61c4
// 005f23f6  c74114b4618d00       mov dword ptr [ecx + 0x14], 0x8d61b4
// 005f23fd  c74118ac618d00       mov dword ptr [ecx + 0x18], 0x8d61ac
// 005f2404  c74120a4618d00       mov dword ptr [ecx + 0x20], 0x8d61a4
// 005f240b  c7818c0000009c618d00 mov dword ptr [ecx + 0x8c], 0x8d619c
// 005f2415  e9c6d4e1ff           jmp 0x40f8e0

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
