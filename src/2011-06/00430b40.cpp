// from server: 100% by tester
// roc 2011-06 00430b40  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430b40
//
// 00430b40  8bc1                 mov eax, ecx
// 00430b42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430b46  0fb6800c010000       movzx eax, byte ptr [eax + 0x10c]
// 00430b4d  8b11                 mov edx, dword ptr [ecx]
// 00430b4f  8b5204               mov edx, dword ptr [edx + 4]
// 00430b52  89442404             mov dword ptr [esp + 4], eax
// 00430b56  ffe2                 jmp edx

struct CMainFrame {
    char pad[0x10c];
    unsigned char field_0xe0;
    void method(int*);
};

void CMainFrame::method(int* p) {
    unsigned char v = field_0xe0;
    void (__thiscall *fn)(int*, unsigned char) = *(void (__thiscall **)(int*, unsigned char))(*(int*)p + 4);
    fn(p, v);
}
