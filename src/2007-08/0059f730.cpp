// from server: 100% by colin
// roc 2007-08 0059f730  unit: RBX::VGameSettings::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f730
//
// 0059f730  c705acdf8b0000000000 mov dword ptr [0x8bdfac], 0
// 0059f73a  c70184317b00         mov dword ptr [ecx], 0x7b3184
// 0059f740  c741047c317b00       mov dword ptr [ecx + 4], 0x7b317c
// 0059f747  c7411074317b00       mov dword ptr [ecx + 0x10], 0x7b3174
// 0059f74e  c7411464317b00       mov dword ptr [ecx + 0x14], 0x7b3164
// 0059f755  c7412c54317b00       mov dword ptr [ecx + 0x2c], 0x7b3154
// 0059f75c  c7414444317b00       mov dword ptr [ecx + 0x44], 0x7b3144
// 0059f763  c7415c34317b00       mov dword ptr [ecx + 0x5c], 0x7b3134
// 0059f76a  c7417424317b00       mov dword ptr [ecx + 0x74], 0x7b3124
// 0059f771  c7818c00000014317b00 mov dword ptr [ecx + 0x8c], 0x7b3114
// 0059f77b  e9300bfaff           jmp 0x5402b0

struct RBX_VGameSettings_FactoryProduct {
    void construct();
};

extern "C" void __stdcall sub_5402B0();

void RBX_VGameSettings_FactoryProduct::construct()
{
    *(int*)0x8bdfac = 0;
    *(int*)((char*)this + 0x00) = 0x7b3184;
    *(int*)((char*)this + 0x04) = 0x7b317c;
    *(int*)((char*)this + 0x10) = 0x7b3174;
    *(int*)((char*)this + 0x14) = 0x7b3164;
    *(int*)((char*)this + 0x2c) = 0x7b3154;
    *(int*)((char*)this + 0x44) = 0x7b3144;
    *(int*)((char*)this + 0x5c) = 0x7b3134;
    *(int*)((char*)this + 0x74) = 0x7b3124;
    *(int*)((char*)this + 0x8c) = 0x7b3114;
    sub_5402B0();
}
