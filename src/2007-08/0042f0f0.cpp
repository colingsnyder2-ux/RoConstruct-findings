// from server: 100% by colin
// roc 2007-08 0042f0f0  unit: CMainFrame  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f0f0
//
// 0042f0f0  8bc1                 mov eax, ecx
// 0042f0f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042f0f6  0fb680e0000000       movzx eax, byte ptr [eax + 0xe0]
// 0042f0fd  8b11                 mov edx, dword ptr [ecx]
// 0042f0ff  8b5204               mov edx, dword ptr [edx + 4]
// 0042f102  89442404             mov dword ptr [esp + 4], eax
// 0042f106  ffe2                 jmp edx

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
