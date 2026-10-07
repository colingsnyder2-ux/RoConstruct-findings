// roc 2012-06 004b9590  unit: RBX::ViewBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9590
//
// 004b9590  8d81b8000000         lea eax, [ecx + 0xb8]
// 004b9596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9590 {
    char pad0[184];
    int m_x;
    int* f();
};
int* S_func_004b9590::f()
{
    return &m_x;
}
