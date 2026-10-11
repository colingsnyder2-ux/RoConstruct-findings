// from server: 100% by colin
// roc 2009-06 0067bb30  unit: RBX::VRotate::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bb30
//
// 0067bb30  c701ac518e00         mov dword ptr [ecx], 0x8e51ac
// 0067bb36  c741149c518e00       mov dword ptr [ecx + 0x14], 0x8e519c
// 0067bb3d  c7411894518e00       mov dword ptr [ecx + 0x18], 0x8e5194
// 0067bb44  c741208c518e00       mov dword ptr [ecx + 0x20], 0x8e518c
// 0067bb4b  c7818c00000074518e00 mov dword ptr [ecx + 0x8c], 0x8e5174
// 0067bb55  e906f8ffff           jmp 0x67b360

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
