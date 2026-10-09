// roc 2007-03 004f3aa0  unit: seg_004f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3aa0
//
// 004f3aa0  e8bbffffff           call 0x4f3a60
// 004f3aa5  dc0558a58b00         fadd qword ptr [0x8ba558]
// 004f3aab  c3                   ret 
// copied from an identical function in another client (function ?wrapper@ns_ROCX000003@@YANXZ)

namespace ns_ROCX000003 {
extern double g_4ffef0_result;

double getValue();

double wrapper()
{
    return getValue() + g_4ffef0_result;
}
}
