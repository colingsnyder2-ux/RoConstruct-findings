// roc 2011-06 0063e5d0  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e5d0
//
// 0063e5d0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 0063e5d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063e5d0 {
    char pad0[472];
    int m_x;
    int f();
};
int S_func_0063e5d0::f()
{
    return m_x;
}
