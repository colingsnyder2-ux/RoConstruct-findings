// from server: 94% by colin
// roc 2008-06 00666250  unit: RBX::PartDragTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666250
//
// 00666250  d9442404             fld dword ptr [esp + 4]
// 00666254  d86104               fsub dword ptr [ecx + 4]
// 00666257  d809                 fmul dword ptr [ecx]
// 00666259  d84104               fadd dword ptr [ecx + 4]
// 0066625c  d95104               fst dword ptr [ecx + 4]
// 0066625f  c20400               ret 4

struct S_func_00666250 {
    float m_scale;
    float m_value;
    void f(float arg);
};

void S_func_00666250::f(float arg)
{
    m_value = (arg - m_value) * m_scale + m_value;
}
