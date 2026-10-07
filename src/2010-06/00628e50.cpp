// roc 2010-06 00628e50  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628e50
//
// 00628e50  d981cc000000         fld dword ptr [ecx + 0xcc]
// 00628e56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00628e50 {
    char pad[204];
    float m_x;
    float f();
};
float S_func_00628e50::f()
{
    return m_x;
}
