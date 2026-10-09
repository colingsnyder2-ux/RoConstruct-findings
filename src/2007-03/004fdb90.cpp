// roc 2007-03 004fdb90  unit: seg_004f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdb90
//
// 004fdb90  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004fdb93  83e801               sub eax, 1
// 004fdb96  50                   push eax
// 004fdb97  e864ffffff           call 0x4fdb00
// 004fdb9c  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000d@GCamera@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
struct GCamera {
    char pad[0x4c];
    int field_0x4c;
    void fn_ROCX00000d(int);
    void fn_ROCX00000d();
};

void GCamera::fn_ROCX00000d()
{
    fn_ROCX00000d(field_0x4c - 1);
}
}
