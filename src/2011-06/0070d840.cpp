// roc 2011-06 0070d840  unit: RBX::SkateboardPlatform  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070d840
//
// 0070d840  8b81a4030000         mov eax, dword ptr [ecx + 0x3a4]
// 0070d846  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070d840 {
    char pad0[932];
    int m_x;
    int f();
};
int S_func_0070d840::f()
{
    return m_x;
}
