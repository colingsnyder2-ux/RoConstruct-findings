// from server: 100% by tester
// roc 2010-06 00428d30  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428d30
//
// 00428d30  8bc1                 mov eax, ecx
// 00428d32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428d36  0fb68008010000       movzx eax, byte ptr [eax + 0x108]
// 00428d3d  8b11                 mov edx, dword ptr [ecx]
// 00428d3f  8b5204               mov edx, dword ptr [edx + 4]
// 00428d42  89442404             mov dword ptr [esp + 4], eax
// 00428d46  ffe2                 jmp edx

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
