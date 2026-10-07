// roc 2011-06 0091d660  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091d660
//
// 0091d660  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0091d663  8b80cc0a0000         mov eax, dword ptr [eax + 0xacc]
// 0091d669  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0091d660 {
    char pad[2764];
    int m_x;
};
struct S_func_0091d660 {
    char pad[12];
    I_func_0091d660* m_p;
    int f();
};
int S_func_0091d660::f()
{
    return m_p->m_x;
}
