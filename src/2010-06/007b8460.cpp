// roc 2010-06 007b8460  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8460
//
// 007b8460  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 007b8466  8b4014               mov eax, dword ptr [eax + 0x14]
// 007b8469  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007b8460 {
    char pad[20];
    int m_x;
};
struct S_func_007b8460 {
    char pad[376];
    I_func_007b8460* m_p;
    int f();
};
int S_func_007b8460::f()
{
    return m_p->m_x;
}
