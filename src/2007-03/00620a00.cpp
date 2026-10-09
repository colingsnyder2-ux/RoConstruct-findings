// roc 2007-03 00620a00  unit: seg_00620000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620a00
//
// 00620a00  56                   push esi
// 00620a01  8bb180010000         mov esi, dword ptr [ecx + 0x180]
// 00620a07  8b06                 mov eax, dword ptr [esi]
// 00620a09  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 00620a0f  8bce                 mov ecx, esi
// 00620a11  ffd2                 call edx
// 00620a13  8b06                 mov eax, dword ptr [esi]
// 00620a15  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00620a1b  8bce                 mov ecx, esi
// 00620a1d  ffd2                 call edx
// 00620a1f  5e                   pop esi
// 00620a20  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSelectionChanged@CXTPControlComboBoxList@ns_ROCX00001f@@QAEXHHH@Z)

namespace ns_ROCX00001f {
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
}
