// from server: 100% by colin
// roc 2009-06 00624860  unit: RBX::VStarterPackService::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624860
//
// 00624860  c7017c9b8d00         mov dword ptr [ecx], 0x8d9b7c
// 00624866  c74114709b8d00       mov dword ptr [ecx + 0x14], 0x8d9b70
// 0062486d  c74118689b8d00       mov dword ptr [ecx + 0x18], 0x8d9b68
// 00624874  c74120609b8d00       mov dword ptr [ecx + 0x20], 0x8d9b60
// 0062487b  c7818c000000589b8d00 mov dword ptr [ecx + 0x8c], 0x8d9b58
// 00624885  e956b0deff           jmp 0x40f8e0

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
