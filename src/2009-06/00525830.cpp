// roc 2009-06 00525830  unit: RBX::SceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525830
//
// 00525830  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 00525836  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00525830 {
    char pad[488];
    float m_x;
    float f();
};
float S_func_00525830::f()
{
    return m_x;
}
