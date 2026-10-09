// from server: 100% by colin
// roc 2007-08 00543020  unit: RBX::VDebugSettings::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543020
//
// 00543020  c70544af8b0000000000 mov dword ptr [0x8baf44], 0
// 0054302a  c701ac687a00         mov dword ptr [ecx], 0x7a68ac
// 00543030  c74104a4687a00       mov dword ptr [ecx + 4], 0x7a68a4
// 00543037  c741109c687a00       mov dword ptr [ecx + 0x10], 0x7a689c
// 0054303e  c741148c687a00       mov dword ptr [ecx + 0x14], 0x7a688c
// 00543045  c7412c7c687a00       mov dword ptr [ecx + 0x2c], 0x7a687c
// 0054304c  c741446c687a00       mov dword ptr [ecx + 0x44], 0x7a686c
// 00543053  c7415c5c687a00       mov dword ptr [ecx + 0x5c], 0x7a685c
// 0054305a  c741744c687a00       mov dword ptr [ecx + 0x74], 0x7a684c
// 00543061  c7818c0000003c687a00 mov dword ptr [ecx + 0x8c], 0x7a683c
// 0054306b  e940d2ffff           jmp 0x5402b0

struct RBX_VDebugSettings_FactoryProduct {
    void construct();
};

extern "C" void __stdcall sub_005402B0();

void RBX_VDebugSettings_FactoryProduct::construct()
{
    *(int*)0x8baf44 = 0;
    *(int*)((char*)this + 0x00) = 0x7a68ac;
    *(int*)((char*)this + 0x04) = 0x7a68a4;
    *(int*)((char*)this + 0x10) = 0x7a689c;
    *(int*)((char*)this + 0x14) = 0x7a688c;
    *(int*)((char*)this + 0x2c) = 0x7a687c;
    *(int*)((char*)this + 0x44) = 0x7a686c;
    *(int*)((char*)this + 0x5c) = 0x7a685c;
    *(int*)((char*)this + 0x74) = 0x7a684c;
    *(int*)((char*)this + 0x8c) = 0x7a683c;
    sub_005402B0();
}
