// roc 2009-06 00775350  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775350
//
// 00775350  c7413401000000       mov dword ptr [ecx + 0x34], 1
// 00775357  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00775350 {
    char pad0[52];
    int m_x;
    void f();
};
void S_func_00775350::f()
{
    m_x = (int)1;
}
