// roc 2011-06 0089b6c0  unit: CXTPControlEdit  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089b6c0
//
// 0089b6c0  c7818401000001000000 mov dword ptr [ecx + 0x184], 1
// 0089b6ca  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0089b6c0 {
    char pad0[388];
    int m_x;
    void f();
};
void S_func_0089b6c0::f()
{
    m_x = (int)1;
}
