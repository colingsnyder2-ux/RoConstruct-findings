// roc 2008-06 006fc9e0  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc9e0
//
// 006fc9e0  c7413401000000       mov dword ptr [ecx + 0x34], 1
// 006fc9e7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006fc9e0 {
    char pad0[52];
    int m_x;
    void f();
};
void S_func_006fc9e0::f()
{
    m_x = (int)1;
}
