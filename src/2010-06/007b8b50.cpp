// roc 2010-06 007b8b50  unit: RBX::ViewG3D  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8b50
//
// 007b8b50  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007b8b53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b8b50 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_007b8b50::f()
{
    return m_x;
}
