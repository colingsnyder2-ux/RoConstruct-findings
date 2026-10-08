// roc 2007-03 0066df90  unit: seg_00660000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066df90
//
// 0066df90  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0066df96  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0066df9c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0066df90 {
    char pad[128];
    int m_x;
};
struct S_func_0066df90 {
    char pad[132];
    I_func_0066df90* m_p;
    int f();
};
int S_func_0066df90::f()
{
    return m_p->m_x;
}
