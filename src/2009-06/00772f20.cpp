// roc 2009-06 00772f20  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772f20
//
// 00772f20  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 00772f26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00772f20 {
    char pad0[388];
    int m_x;
    int f();
};
int S_func_00772f20::f()
{
    return m_x;
}
