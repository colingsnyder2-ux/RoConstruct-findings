// roc 2008-06 005fd3c0  unit: RBX::LocalBackpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd3c0
//
// 005fd3c0  8d81cc010000         lea eax, [ecx + 0x1cc]
// 005fd3c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fd3c0 {
    char pad0[460];
    int m_x;
    int* f();
};
int* S_func_005fd3c0::f()
{
    return &m_x;
}
