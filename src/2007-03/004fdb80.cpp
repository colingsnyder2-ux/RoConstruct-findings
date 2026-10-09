// roc 2007-03 004fdb80  unit: seg_004f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdb80
//
// 004fdb80  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004fdb83  83c001               add eax, 1
// 004fdb86  50                   push eax
// 004fdb87  e874ffffff           call 0x4fdb00
// 004fdb8c  c3                   ret 
// copied from an identical function in another client (function ?method@Camera@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
struct Camera {
    char pad[0x4c];
    int m_field4c;
    void method();
};

void __stdcall sub_508780(int);

void Camera::method() {
    sub_508780(m_field4c + 1);
}
}
