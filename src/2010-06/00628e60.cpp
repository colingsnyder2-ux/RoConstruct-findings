// roc 2010-06 00628e60  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628e60
//
// 00628e60  d981d4000000         fld dword ptr [ecx + 0xd4]
// 00628e66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00628e60 {
    char pad[212];
    float m_x;
    float f();
};
float S_func_00628e60::f()
{
    return m_x;
}
