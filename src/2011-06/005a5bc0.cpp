// roc 2011-06 005a5bc0  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5bc0
//
// 005a5bc0  dd81b0000000         fld qword ptr [ecx + 0xb0]
// 005a5bc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a5bc0 {
    char pad[176];
    double m_x;
    double f();
};
double S_func_005a5bc0::f()
{
    return m_x;
}
