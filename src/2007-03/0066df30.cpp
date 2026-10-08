// roc 2007-03 0066df30  unit: seg_00660000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066df30
//
// 0066df30  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0066df36  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 0066df3c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0066df30 {
    char pad[176];
    int m_x;
};
struct S_func_0066df30 {
    char pad[132];
    I_func_0066df30* m_p;
    int f();
};
int S_func_0066df30::f()
{
    return m_p->m_x;
}
