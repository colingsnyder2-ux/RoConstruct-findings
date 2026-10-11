// from server: 100% by colin
// roc 2009-06 0067bb80  unit: RBX::VRotateP::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bb80
//
// 0067bb80  c7012c528e00         mov dword ptr [ecx], 0x8e522c
// 0067bb86  c741141c528e00       mov dword ptr [ecx + 0x14], 0x8e521c
// 0067bb8d  c7411814528e00       mov dword ptr [ecx + 0x18], 0x8e5214
// 0067bb94  c741200c528e00       mov dword ptr [ecx + 0x20], 0x8e520c
// 0067bb9b  c7818c000000f4518e00 mov dword ptr [ecx + 0x8c], 0x8e51f4
// 0067bba5  e9b6f7ffff           jmp 0x67b360

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
