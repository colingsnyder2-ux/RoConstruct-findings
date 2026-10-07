// roc 2009-06 00678b60  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678b60
//
// 00678b60  dd8110010000         fld qword ptr [ecx + 0x110]
// 00678b66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00678b60 {
    char pad[272];
    double m_x;
    double f();
};
double S_func_00678b60::f()
{
    return m_x;
}
