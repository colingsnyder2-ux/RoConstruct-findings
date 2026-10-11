// from server: 100% by colin
// roc 2009-06 004d0620  unit: RBX::Network::VClient::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d0620
//
// 004d0620  c7011c568c00         mov dword ptr [ecx], 0x8c561c
// 004d0626  c741140c568c00       mov dword ptr [ecx + 0x14], 0x8c560c
// 004d062d  c7411804568c00       mov dword ptr [ecx + 0x18], 0x8c5604
// 004d0634  c74120fc558c00       mov dword ptr [ecx + 0x20], 0x8c55fc
// 004d063b  c7818c000000cc558c00 mov dword ptr [ecx + 0x8c], 0x8c55cc
// 004d0645  e986150100           jmp 0x4e1bd0

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
