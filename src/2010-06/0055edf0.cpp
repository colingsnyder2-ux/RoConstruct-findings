// roc 2010-06 0055edf0  unit: G3D::TextInput::WrongSymbol  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055edf0
//
// 0055edf0  8d4110               lea eax, [ecx + 0x10]
// 0055edf3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055edf0 {
    char pad0[16];
    int m_x;
    int* f();
};
int* S_func_0055edf0::f()
{
    return &m_x;
}
