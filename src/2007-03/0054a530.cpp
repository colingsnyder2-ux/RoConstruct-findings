// roc 2007-03 0054a530  unit: seg_00540000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a530
//
// 0054a530  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0054a533  c1e804               shr eax, 4
// 0054a536  83e001               and eax, 1
// 0054a539  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEIXZ)

namespace ns_ROCX000003 {
struct S {
    unsigned int pad[21];
    unsigned int field;
    unsigned int f();
};

unsigned int S::f() {
    return (this->field >> 4) & 1;
}
}
