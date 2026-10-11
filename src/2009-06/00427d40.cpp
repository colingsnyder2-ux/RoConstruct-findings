// from server: 100% by tester
// roc 2009-06 00427d40  unit: CWrapperView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427d40
//
// 00427d40  8bc1                 mov eax, ecx
// 00427d42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00427d46  0fb68008010000       movzx eax, byte ptr [eax + 0x108]
// 00427d4d  8b11                 mov edx, dword ptr [ecx]
// 00427d4f  8b5204               mov edx, dword ptr [edx + 4]
// 00427d52  89442404             mov dword ptr [esp + 4], eax
// 00427d56  ffe2                 jmp edx

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
