// roc 2009-06 0072d220  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d220
//
// 0072d220  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0072d226  8b4014               mov eax, dword ptr [eax + 0x14]
// 0072d229  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0072d220 {
    char pad[20];
    int m_x;
};
struct S_func_0072d220 {
    char pad[376];
    I_func_0072d220* m_p;
    int f();
};
int S_func_0072d220::f()
{
    return m_p->m_x;
}
