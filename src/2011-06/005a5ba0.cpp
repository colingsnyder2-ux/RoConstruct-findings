// roc 2011-06 005a5ba0  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5ba0
//
// 005a5ba0  dd81b8000000         fld qword ptr [ecx + 0xb8]
// 005a5ba6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a5ba0 {
    char pad[184];
    double m_x;
    double f();
};
double S_func_005a5ba0::f()
{
    return m_x;
}
