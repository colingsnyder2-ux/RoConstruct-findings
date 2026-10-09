// roc 2007-03 004302b0  unit: seg_00430000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004302b0
//
// 004302b0  8bc1                 mov eax, ecx
// 004302b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004302b6  0fb680e0000000       movzx eax, byte ptr [eax + 0xe0]
// 004302bd  8b11                 mov edx, dword ptr [ecx]
// 004302bf  8b5204               mov edx, dword ptr [edx + 4]
// 004302c2  89442404             mov dword ptr [esp + 4], eax
// 004302c6  ffe2                 jmp edx
// copied from an identical function in another client (function ?method@CMainFrame@ns_ROCX000001@@QAEXPAH@Z)

namespace ns_ROCX000001 {
struct CMainFrame {
    char pad[0xe0];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
}
