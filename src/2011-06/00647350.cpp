// roc 2011-06 00647350  unit: RBX::CoreGuiService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647350
//
// 00647350  8d81c8000000         lea eax, [ecx + 0xc8]
// 00647356  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00647350 {
    char pad0[200];
    int m_x;
    int* f();
};
int* S_func_00647350::f()
{
    return &m_x;
}
