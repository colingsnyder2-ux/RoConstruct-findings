// roc 2007-08 00644710  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644710
//
// 00644710  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00644716  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00644719  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00644710 {
    char pad[44];
    int m_x;
};
struct S_func_00644710 {
    char pad[248];
    I_func_00644710* m_p;
    int f();
};
int S_func_00644710::f()
{
    return m_p->m_x;
}
