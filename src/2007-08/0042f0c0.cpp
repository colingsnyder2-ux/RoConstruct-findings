// from server: 100% by tester
// roc 2007-08 0042f0c0  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f0c0
//
// 0042f0c0  8bc1                 mov eax, ecx
// 0042f0c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042f0c6  0fb680ec000000       movzx eax, byte ptr [eax + 0xec]
// 0042f0cd  8b11                 mov edx, dword ptr [ecx]
// 0042f0cf  8b5204               mov edx, dword ptr [edx + 4]
// 0042f0d2  89442404             mov dword ptr [esp + 4], eax
// 0042f0d6  ffe2                 jmp edx

struct CMainFrame {
    char pad[0xec];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
