// from server: 100% by atomic.potato
// roc 2008-06 005a0120  unit: RBX::SpecialShape  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0120
//
// 005a0120  dd8120040000         fld qword ptr [ecx + 0x420]
// 005a0126  dc8118040000         fadd qword ptr [ecx + 0x418]
// 005a012c  dc8110040000         fadd qword ptr [ecx + 0x410]
// 005a0132  c3                   ret 

struct SpecialShape {
    char pad[1040];
    double m_410;
    double m_418;
    double m_420;
    double f();
};

double SpecialShape::f()
{
    return m_420 + m_418 + m_410;
}
