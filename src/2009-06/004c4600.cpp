// roc 2009-06 004c4600  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4600
//
// 004c4600  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 004c4606  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c4600 {
    char pad0[220];
    int m_x;
    int f();
};
int S_func_004c4600::f()
{
    return m_x;
}
