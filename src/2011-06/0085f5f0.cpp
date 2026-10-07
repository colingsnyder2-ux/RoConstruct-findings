// roc 2011-06 0085f5f0  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f5f0
//
// 0085f5f0  c7413401000000       mov dword ptr [ecx + 0x34], 1
// 0085f5f7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0085f5f0 {
    char pad0[52];
    int m_x;
    void f();
};
void S_func_0085f5f0::f()
{
    m_x = (int)1;
}
