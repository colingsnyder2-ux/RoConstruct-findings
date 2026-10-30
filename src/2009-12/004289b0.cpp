// roc 2009-12 004289b0  unit: CMainFrame  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004289b0
//
// 004289b0  8bc1                 mov eax, ecx
// 004289b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004289b6  0fb680fc000000       movzx eax, byte ptr [eax + 0xfc]
// 004289bd  8b11                 mov edx, dword ptr [ecx]
// 004289bf  8b5204               mov edx, dword ptr [edx + 4]
// 004289c2  89442404             mov dword ptr [esp + 4], eax
// 004289c6  ffe2                 jmp edx
// copied from an identical function in another client (function ?method@CMainFrame@ns_ROCX000007@@QAEXPAH@Z)

namespace ns_ROCX000007 {
// from server: 100% by tester
struct CMainFrame {
    char pad[0xfc];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
}
