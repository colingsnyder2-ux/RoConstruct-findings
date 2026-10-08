// roc 2007-03 006dfd80  unit: seg_006d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfd80
//
// 006dfd80  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006dfd83  8b80500a0000         mov eax, dword ptr [eax + 0xa50]
// 006dfd89  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006dfd80 {
    char pad[2640];
    int m_x;
};
struct S_func_006dfd80 {
    char pad[100];
    I_func_006dfd80* m_p;
    int f();
};
int S_func_006dfd80::f()
{
    return m_p->m_x;
}
