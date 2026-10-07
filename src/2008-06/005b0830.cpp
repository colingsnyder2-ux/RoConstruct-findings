// roc 2008-06 005b0830  unit: RBX::ScriptContext  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0830
//
// 005b0830  8d8158010000         lea eax, [ecx + 0x158]
// 005b0836  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b0830 {
    char pad0[344];
    int m_x;
    int* f();
};
int* S_func_005b0830::f()
{
    return &m_x;
}
