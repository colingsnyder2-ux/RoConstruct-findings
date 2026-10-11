// from server: 100% by colin
// roc 2009-06 00624810  unit: RBX::StarterGear  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624810
//
// 00624810  c701ec9a8d00         mov dword ptr [ecx], 0x8d9aec
// 00624816  c74114dc9a8d00       mov dword ptr [ecx + 0x14], 0x8d9adc
// 0062481d  c74118d49a8d00       mov dword ptr [ecx + 0x18], 0x8d9ad4
// 00624824  c74120cc9a8d00       mov dword ptr [ecx + 0x20], 0x8d9acc
// 0062482b  c7818c000000c49a8d00 mov dword ptr [ecx + 0x8c], 0x8d9ac4
// 00624835  e9a6b0deff           jmp 0x40f8e0

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
