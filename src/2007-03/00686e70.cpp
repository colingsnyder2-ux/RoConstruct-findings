// roc 2007-03 00686e70  unit: seg_00680000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686e70
//
// 00686e70  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00686e76  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 00686e7c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00686e70 {
    char pad[316];
    int m_x;
};
struct S_func_00686e70 {
    char pad[176];
    I_func_00686e70* m_p;
    int f();
};
int S_func_00686e70::f()
{
    return m_p->m_x;
}
