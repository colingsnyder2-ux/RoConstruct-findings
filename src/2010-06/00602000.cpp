// roc 2010-06 00602000  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602000
//
// 00602000  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 00602006  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00602000 {
    char pad0[524];
    int m_x;
    int f();
};
int S_func_00602000::f()
{
    return m_x;
}
