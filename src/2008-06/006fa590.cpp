// roc 2008-06 006fa590  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa590
//
// 006fa590  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 006fa596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006fa590 {
    char pad0[388];
    int m_x;
    int f();
};
int S_func_006fa590::f()
{
    return m_x;
}
