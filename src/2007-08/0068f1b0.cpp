// roc 2007-08 0068f1b0  unit: CXTPDockingPane  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f1b0
//
// 0068f1b0  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0068f1b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068f1b0 {
    char pad0[228];
    int m_x;
    int f();
};
int S_func_0068f1b0::f()
{
    return m_x;
}
