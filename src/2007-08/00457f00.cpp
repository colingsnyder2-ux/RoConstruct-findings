// roc 2007-08 00457f00  unit: RBX::Adorn  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457f00
//
// 00457f00  8d815c010000         lea eax, [ecx + 0x15c]
// 00457f06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00457f00 {
    char pad0[348];
    int m_x;
    int* f();
};
int* S_func_00457f00::f()
{
    return &m_x;
}
