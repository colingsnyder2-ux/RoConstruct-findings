// roc 2009-06 00677510  unit: RBX::Assembly  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677510
//
// 00677510  8d819c000000         lea eax, [ecx + 0x9c]
// 00677516  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00677510 {
    char pad0[156];
    int m_x;
    int* f();
};
int* S_func_00677510::f()
{
    return &m_x;
}
