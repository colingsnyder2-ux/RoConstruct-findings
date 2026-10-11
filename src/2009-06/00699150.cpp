// from server: 100% by colin
// roc 2009-06 00699150  unit: RBX::VMotorFeature::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699150
//
// 00699150  c701a4828e00         mov dword ptr [ecx], 0x8e82a4
// 00699156  c7411498828e00       mov dword ptr [ecx + 0x14], 0x8e8298
// 0069915d  c7411890828e00       mov dword ptr [ecx + 0x18], 0x8e8290
// 00699164  c7412088828e00       mov dword ptr [ecx + 0x20], 0x8e8288
// 0069916b  c7818c00000070828e00 mov dword ptr [ecx + 0x8c], 0x8e8270
// 00699175  e996f8ffff           jmp 0x698a10

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
