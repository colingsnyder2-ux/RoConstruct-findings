// from server: 100% by colin
// roc 2007-08 005902e0  unit: RBX::VHint::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005902e0
//
// 005902e0  c70144f97a00         mov dword ptr [ecx], 0x7af944
// 005902e6  c7410438f97a00       mov dword ptr [ecx + 4], 0x7af938
// 005902ed  c7411030f97a00       mov dword ptr [ecx + 0x10], 0x7af930
// 005902f4  c7411420f97a00       mov dword ptr [ecx + 0x14], 0x7af920
// 005902fb  c7412c10f97a00       mov dword ptr [ecx + 0x2c], 0x7af910
// 00590302  c7414400f97a00       mov dword ptr [ecx + 0x44], 0x7af900
// 00590309  c7415cf0f87a00       mov dword ptr [ecx + 0x5c], 0x7af8f0
// 00590310  c74174e0f87a00       mov dword ptr [ecx + 0x74], 0x7af8e0
// 00590317  c7818c000000d0f87a00 mov dword ptr [ecx + 0x8c], 0x7af8d0
// 00590321  c781e8000000b8f87a00 mov dword ptr [ecx + 0xe8], 0x7af8b8
// 0059032b  e9d0fdffff           jmp 0x590100

struct VHint {
    void construct();
};

extern void G1_func_00590100();

void VHint::construct()
{
    *(int*)((char*)this + 0x00) = 0x7af944;
    *(int*)((char*)this + 0x04) = 0x7af938;
    *(int*)((char*)this + 0x10) = 0x7af930;
    *(int*)((char*)this + 0x14) = 0x7af920;
    *(int*)((char*)this + 0x2c) = 0x7af910;
    *(int*)((char*)this + 0x44) = 0x7af900;
    *(int*)((char*)this + 0x5c) = 0x7af8f0;
    *(int*)((char*)this + 0x74) = 0x7af8e0;
    *(int*)((char*)this + 0x8c) = 0x7af8d0;
    *(int*)((char*)this + 0xe8) = 0x7af8b8;
    G1_func_00590100();
}
