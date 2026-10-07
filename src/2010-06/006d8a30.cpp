// roc 2010-06 006d8a30  unit: RBX::SkateboardController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d8a30
//
// 006d8a30  d981a8000000         fld dword ptr [ecx + 0xa8]
// 006d8a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d8a30 {
    char pad[168];
    float m_x;
    float f();
};
float S_func_006d8a30::f()
{
    return m_x;
}
