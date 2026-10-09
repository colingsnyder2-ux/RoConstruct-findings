// from server: 100% by colin
// roc 2007-08 005d2ac0  unit: RBX::ToolMouseCommand  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2ac0
//
// 005d2ac0  c70174b07b00         mov dword ptr [ecx], 0x7bb074
// 005d2ac6  c741046cb07b00       mov dword ptr [ecx + 4], 0x7bb06c
// 005d2acd  c7411064b07b00       mov dword ptr [ecx + 0x10], 0x7bb064
// 005d2ad4  c7411454b07b00       mov dword ptr [ecx + 0x14], 0x7bb054
// 005d2adb  c7412c44b07b00       mov dword ptr [ecx + 0x2c], 0x7bb044
// 005d2ae2  c7414434b07b00       mov dword ptr [ecx + 0x44], 0x7bb034
// 005d2ae9  c7415c24b07b00       mov dword ptr [ecx + 0x5c], 0x7bb024
// 005d2af0  c7417414b07b00       mov dword ptr [ecx + 0x74], 0x7bb014
// 005d2af7  c7818c00000004b07b00 mov dword ptr [ecx + 0x8c], 0x7bb004
// 005d2b01  c781e8000000fcaf7b00 mov dword ptr [ecx + 0xe8], 0x7baffc
// 005d2b0b  e9f0aafcff           jmp 0x59d600

struct S_func_005d2ac0 {
    void f();
};

extern "C" void __stdcall sub_0059d600();

void S_func_005d2ac0::f()
{
    *(int*)((char*)this + 0x00) = 0x7bb074;
    *(int*)((char*)this + 0x04) = 0x7bb06c;
    *(int*)((char*)this + 0x10) = 0x7bb064;
    *(int*)((char*)this + 0x14) = 0x7bb054;
    *(int*)((char*)this + 0x2c) = 0x7bb044;
    *(int*)((char*)this + 0x44) = 0x7bb034;
    *(int*)((char*)this + 0x5c) = 0x7bb024;
    *(int*)((char*)this + 0x74) = 0x7bb014;
    *(int*)((char*)this + 0x8c) = 0x7bb004;
    *(int*)((char*)this + 0xe8) = 0x7baffc;
    sub_0059d600();
}
