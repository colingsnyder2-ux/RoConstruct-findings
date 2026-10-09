// roc 2009-12 006bb010  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb010
//
// 006bb010  d981d4000000         fld dword ptr [ecx + 0xd4]
// 006bb016  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00628e60@ns_ROCX000082@@QAEMXZ)

namespace ns_ROCX000082 {
struct S_func_00628e60 {
    char pad[212];
    float m_x;
    float f();
};
float S_func_00628e60::f()
{
    return m_x;
}
}
