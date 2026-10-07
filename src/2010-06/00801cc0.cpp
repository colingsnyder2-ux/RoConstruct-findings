// roc 2010-06 00801cc0  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801cc0
//
// 00801cc0  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 00801cc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00801cc0 {
    char pad0[388];
    int m_x;
    int f();
};
int S_func_00801cc0::f()
{
    return m_x;
}
