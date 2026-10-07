// roc 2010-06 008821f0  unit: CXTPTabManagerItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008821f0
//
// 008821f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 008821f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008821f0 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_008821f0::f()
{
    return m_x;
}
