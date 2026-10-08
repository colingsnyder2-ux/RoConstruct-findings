// roc 2007-08 005aca70  unit: RBX::World  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aca70
//
// 005aca70  dd8168010000         fld qword ptr [ecx + 0x168]
// 005aca76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005aca70 {
    char pad[360];
    double m_x;
    double f();
};
double S_func_005aca70::f()
{
    return m_x;
}
