// roc 2010-06 00843b10  unit: RBX::ViewG3D  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00843b10
//
// 00843b10  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00843b13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00843b10 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_00843b10::f()
{
    return m_x;
}
