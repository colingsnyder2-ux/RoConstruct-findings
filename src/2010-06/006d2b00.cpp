// roc 2010-06 006d2b00  unit: RBX::SkateboardPlatform  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2b00
//
// 006d2b00  8b81b0030000         mov eax, dword ptr [ecx + 0x3b0]
// 006d2b06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2b00 {
    char pad0[944];
    int m_x;
    int f();
};
int S_func_006d2b00::f()
{
    return m_x;
}
