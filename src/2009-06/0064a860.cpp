// from server: 100% by colin
// roc 2009-06 0064a860  unit: RBX::VTexture::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a860
//
// 0064a860  c70194ee8d00         mov dword ptr [ecx], 0x8dee94
// 0064a866  c7411488ee8d00       mov dword ptr [ecx + 0x14], 0x8dee88
// 0064a86d  c7411880ee8d00       mov dword ptr [ecx + 0x18], 0x8dee80
// 0064a874  c7412078ee8d00       mov dword ptr [ecx + 0x20], 0x8dee78
// 0064a87b  c7818c00000060ee8d00 mov dword ptr [ecx + 0x8c], 0x8dee60
// 0064a885  e9b6feffff           jmp 0x64a740

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
