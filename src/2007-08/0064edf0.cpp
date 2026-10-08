// roc 2007-08 0064edf0  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064edf0
//
// 0064edf0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 0064edf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064edf0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_0064edf0::f()
{
    return m_x;
}
