// roc 2011-06 005a5b90  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5b90
//
// 005a5b90  dd81a0000000         fld qword ptr [ecx + 0xa0]
// 005a5b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a5b90 {
    char pad[160];
    double m_x;
    double f();
};
double S_func_005a5b90::f()
{
    return m_x;
}
