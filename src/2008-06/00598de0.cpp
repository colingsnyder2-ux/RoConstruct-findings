// roc 2008-06 00598de0  unit: RBX::PartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598de0
//
// 00598de0  8d81f4010000         lea eax, [ecx + 0x1f4]
// 00598de6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};
int* S_func_00598de0::f()
{
    return &m_x;
}
