// roc 2011-06 0089b8b0  unit: CXTPControlEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089b8b0
//
// 0089b8b0  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 0089b8b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0089b8b0 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_0089b8b0::f()
{
    return m_x;
}
