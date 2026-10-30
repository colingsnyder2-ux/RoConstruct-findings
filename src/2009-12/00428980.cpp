// roc 2009-12 00428980  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428980
//
// 00428980  8bc1                 mov eax, ecx
// 00428982  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428986  0fb68008010000       movzx eax, byte ptr [eax + 0x108]
// 0042898d  8b11                 mov edx, dword ptr [ecx]
// 0042898f  8b5204               mov edx, dword ptr [edx + 4]
// 00428992  89442404             mov dword ptr [esp + 4], eax
// 00428996  ffe2                 jmp edx
// copied from an identical function in another client (function ?method@CMainFrame@ns_ROCX000006@@QAEXPAH@Z)

namespace ns_ROCX000006 {
struct CMainFrame {
    char pad[0x108];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
}
