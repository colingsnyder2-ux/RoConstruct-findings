// roc 2010-06 006779a0  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006779a0
//
// 006779a0  8d8184000000         lea eax, [ecx + 0x84]
// 006779a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006779a0 {
    char pad0[132];
    int m_x;
    int* f();
};
int* S_func_006779a0::f()
{
    return &m_x;
}
