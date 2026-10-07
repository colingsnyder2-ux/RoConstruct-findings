// roc 2009-06 0064a1d0  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a1d0
//
// 0064a1d0  d981c8000000         fld dword ptr [ecx + 0xc8]
// 0064a1d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064a1d0 {
    char pad[200];
    float m_x;
    float f();
};
float S_func_0064a1d0::f()
{
    return m_x;
}
