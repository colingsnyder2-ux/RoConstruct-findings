// from server: 100% by tester
// roc 2008-06 0042eec0  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eec0
//
// 0042eec0  8bc1                 mov eax, ecx
// 0042eec2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042eec6  0fb68004010000       movzx eax, byte ptr [eax + 0x104]
// 0042eecd  8b11                 mov edx, dword ptr [ecx]
// 0042eecf  8b5204               mov edx, dword ptr [edx + 4]
// 0042eed2  89442404             mov dword ptr [esp + 4], eax
// 0042eed6  ffe2                 jmp edx

struct CMainFrame {
    char pad[0x104];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
