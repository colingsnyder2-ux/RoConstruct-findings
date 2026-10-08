// from server: 69% by colin
// roc 2007-08 0069a4f0  unit: CXTPPropertyGridItemColor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a4f0
//
// 0069a4f0  56                   push esi
// 0069a4f1  8bf1                 mov esi, ecx
// 0069a4f3  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0069a4f9  85c0                 test eax, eax
// 0069a4fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069a4ff  898e00010000         mov dword ptr [esi + 0x100], ecx
// 0069a505  7402                 je 0x69a509
// 0069a507  8908                 mov dword ptr [eax], ecx
// 0069a509  51                   push ecx
// 0069a50a  8bc4                 mov eax, esp
// 0069a50c  8964240c             mov dword ptr [esp + 0xc], esp
// 0069a510  51                   push ecx
// 0069a511  50                   push eax
// 0069a512  e8e9feffff           call 0x69a400
// 0069a517  83c408               add esp, 8
// 0069a51a  8bce                 mov ecx, esi
// 0069a51c  e80fe1ffff           call 0x698630
// 0069a521  5e                   pop esi
// 0069a522  c20400               ret 4

struct CXTPPropertyGridItemColor {
    void SetValue(int);
    void OnValueChanged();
    int m_nValue;
    char pad[0x100 - 4];
    int m_nValue2;
    int* m_pValue;
};

void CXTPPropertyGridItemColor::SetValue(int value) {
    m_nValue2 = value;
    if (m_pValue != 0) {
        *m_pValue = value;
    }
    int* p = &value;
    int* q = &value;
    (*(void (__stdcall*)(int*, int*))0x69a400)(p, q);
    OnValueChanged();
}
