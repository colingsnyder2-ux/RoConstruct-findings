// roc 2009-06 0066be30  unit: RBX::Humanoid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066be30
//
// 0066be30  d9819c000000         fld dword ptr [ecx + 0x9c]
// 0066be36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066be30 {
    char pad[156];
    float m_x;
    float f();
};
float S_func_0066be30::f()
{
    return m_x;
}
