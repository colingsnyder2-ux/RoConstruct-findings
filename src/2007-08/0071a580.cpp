// from server: 91% by colin
// roc 2007-08 0071a580  unit: CXTPRibbonControlSystemPopupBarListItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a580
//
// 0071a580  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 0071a586  8b442404             mov eax, dword ptr [esp + 4]
// 0071a58a  8b8960010000         mov ecx, dword ptr [ecx + 0x160]
// 0071a590  8910                 mov dword ptr [eax], edx
// 0071a592  894804               mov dword ptr [eax + 4], ecx
// 0071a595  c20800               ret 8

struct S_func_0071a580 {
    char pad0[0x15c];
    int m_a;
    int m_b;
    void f(int* p, int unused);
};

void S_func_0071a580::f(int* p, int unused)
{
    *p = m_a;
    p[1] = m_b;
}
