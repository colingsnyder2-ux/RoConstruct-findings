// from server: 100% by colin
// roc 2009-06 004bc640  unit: RBX::VPants::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bc640
//
// 004bc640  c701ac488c00         mov dword ptr [ecx], 0x8c48ac
// 004bc646  c74114a0488c00       mov dword ptr [ecx + 0x14], 0x8c48a0
// 004bc64d  c7411898488c00       mov dword ptr [ecx + 0x18], 0x8c4898
// 004bc654  c7412090488c00       mov dword ptr [ecx + 0x20], 0x8c4890
// 004bc65b  c7818c00000088488c00 mov dword ptr [ecx + 0x8c], 0x8c4888
// 004bc665  e996fcffff           jmp 0x4bc300

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
