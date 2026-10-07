// roc 2008-06 004e5ba0  unit: RBX::Block  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5ba0
//
// 004e5ba0  8d8180010000         lea eax, [ecx + 0x180]
// 004e5ba6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5ba0 {
    char pad0[384];
    int m_x;
    int* f();
};
int* S_func_004e5ba0::f()
{
    return &m_x;
}
