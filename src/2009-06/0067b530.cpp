// from server: 100% by colin
// roc 2009-06 0067b530  unit: RBX::VRotate::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b530
//
// 0067b530  c7012c518e00         mov dword ptr [ecx], 0x8e512c
// 0067b536  c741141c518e00       mov dword ptr [ecx + 0x14], 0x8e511c
// 0067b53d  c7411814518e00       mov dword ptr [ecx + 0x18], 0x8e5114
// 0067b544  c741200c518e00       mov dword ptr [ecx + 0x20], 0x8e510c
// 0067b54b  c7818c000000f4508e00 mov dword ptr [ecx + 0x8c], 0x8e50f4
// 0067b555  e906feffff           jmp 0x67b360

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
