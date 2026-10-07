// roc 2009-06 00427780  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427780
//
// 00427780  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 00427786  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00427780 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_00427780::f()
{
    return m_x;
}
