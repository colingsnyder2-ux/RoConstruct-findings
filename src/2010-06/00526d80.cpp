// roc 2010-06 00526d80  unit: RBX::ViewG3D  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526d80
//
// 00526d80  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00526d83  05c4000000           add eax, 0xc4
// 00526d88  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00526d80 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_00526d80::f()
{
    return m_x + 0xc4;
}
