// roc 2011-06 00869380  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869380
//
// 00869380  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 00869386  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00869380 {
    char pad0[388];
    int m_x;
    int f();
};
int S_func_00869380::f()
{
    return m_x;
}
