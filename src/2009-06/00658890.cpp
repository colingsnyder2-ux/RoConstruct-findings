// from server: 100% by colin
// roc 2009-06 00658890  unit: RBX::VHumanoidController::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00658890
//
// 00658890  c7016c0f8e00         mov dword ptr [ecx], 0x8e0f6c
// 00658896  c74114600f8e00       mov dword ptr [ecx + 0x14], 0x8e0f60
// 0065889d  c74118580f8e00       mov dword ptr [ecx + 0x18], 0x8e0f58
// 006588a4  c74120500f8e00       mov dword ptr [ecx + 0x20], 0x8e0f50
// 006588ab  c7818c000000440f8e00 mov dword ptr [ecx + 0x8c], 0x8e0f44
// 006588b5  e946ffffff           jmp 0x658800

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
