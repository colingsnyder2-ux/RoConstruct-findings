// roc 2008-06 0042e9f0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e9f0
//
// 0042e9f0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0042e9f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042e9f0 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_0042e9f0::f()
{
    return m_x;
}
