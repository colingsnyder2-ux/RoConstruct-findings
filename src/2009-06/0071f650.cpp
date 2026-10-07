// roc 2009-06 0071f650  unit: CXTPControlAction  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f650
//
// 0071f650  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0071f653  8b4034               mov eax, dword ptr [eax + 0x34]
// 0071f656  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0071f650 {
    char pad[52];
    int m_x;
};
struct S_func_0071f650 {
    char pad[112];
    I_func_0071f650* m_p;
    int f();
};
int S_func_0071f650::f()
{
    return m_p->m_x;
}
