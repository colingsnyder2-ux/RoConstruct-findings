// roc 2011-06 00704690  unit: G3D::VCoordinateFrame::V?$Value::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00704690
//
// 00704690  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00704696  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00704690 {
    char pad0[404];
    int m_x;
    int f();
};
int S_func_00704690::f()
{
    return m_x;
}
