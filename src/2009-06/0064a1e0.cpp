// roc 2009-06 0064a1e0  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a1e0
//
// 0064a1e0  d981cc000000         fld dword ptr [ecx + 0xcc]
// 0064a1e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064a1e0 {
    char pad[204];
    float m_x;
    float f();
};
float S_func_0064a1e0::f()
{
    return m_x;
}
