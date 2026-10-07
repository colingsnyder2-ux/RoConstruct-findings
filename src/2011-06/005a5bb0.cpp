// roc 2011-06 005a5bb0  unit: RBX::Soundscape::SoundChannel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5bb0
//
// 005a5bb0  dd81a8000000         fld qword ptr [ecx + 0xa8]
// 005a5bb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a5bb0 {
    char pad[168];
    double m_x;
    double f();
};
double S_func_005a5bb0::f()
{
    return m_x;
}
