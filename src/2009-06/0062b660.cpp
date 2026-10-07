// roc 2009-06 0062b660  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b660
//
// 0062b660  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0062b666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062b660 {
    char pad0[552];
    int m_x;
    int f();
};
int S_func_0062b660::f()
{
    return m_x;
}
