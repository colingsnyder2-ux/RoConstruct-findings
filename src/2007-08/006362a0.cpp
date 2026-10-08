// from server: 100% by colin
// roc 2007-08 006362a0  unit: CXTPControlComboBoxList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006362a0
//
// 006362a0  56                   push esi
// 006362a1  8bb180010000         mov esi, dword ptr [ecx + 0x180]
// 006362a7  8b06                 mov eax, dword ptr [esi]
// 006362a9  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 006362af  8bce                 mov ecx, esi
// 006362b1  ffd2                 call edx
// 006362b3  8b06                 mov eax, dword ptr [esi]
// 006362b5  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006362bb  8bce                 mov ecx, esi
// 006362bd  ffd2                 call edx
// 006362bf  5e                   pop esi
// 006362c0  c20c00               ret 0xc

struct CXTPControlComboBoxList {
    char pad[0x180];
    void* m_pList;
    void OnSelectionChanged(int, int, int);
};

void CXTPControlComboBoxList::OnSelectionChanged(int a, int b, int c) {
    void* p = m_pList;
    void** vt = *(void***)p;
    ((void (__thiscall*)(void*))vt[0x15c / 4])(p);
    vt = *(void***)p;
    ((void (__thiscall*)(void*))vt[0x98 / 4])(p);
}
