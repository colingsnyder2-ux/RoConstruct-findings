// roc 2009-12 006bb000  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb000
//
// 006bb000  d981d0000000         fld dword ptr [ecx + 0xd0]
// 006bb006  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00751cc0@ns_ROCX000000@@QAEMXZ)

namespace ns_ROCX000000 {
struct S_func_00751cc0 {
    char pad[208];
    float m_x;
    float f();
};
float S_func_00751cc0::f()
{
    return m_x;
}
}
