// roc 2011-06 007a2e50  unit: RBX::Body  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a2e50
//
// 007a2e50  d981cc000000         fld dword ptr [ecx + 0xcc]
// 007a2e56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a2e50 {
    char pad[204];
    float m_x;
    float f();
};
float S_func_007a2e50::f()
{
    return m_x;
}
