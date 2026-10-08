// from server: 100% by colin
// roc 2007-08 004fff30  unit: G3D::Shader  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fff30
//
// 004fff30  e8bbffffff           call 0x4ffef0
// 004fff35  dc0588008c00         fadd qword ptr [0x8c0088]
// 004fff3b  c3                   ret 

extern double g_4ffef0_result;

double getValue();

double wrapper()
{
    return getValue() + g_4ffef0_result;
}
