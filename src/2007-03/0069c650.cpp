// roc 2007-03 0069c650  unit: seg_00690000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069c650
//
// 0069c650  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 0069c656  8b80cc010000         mov eax, dword ptr [eax + 0x1cc]
// 0069c65c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0069c650 {
    char pad[460];
    int m_x;
};
struct S_func_0069c650 {
    char pad[612];
    I_func_0069c650* m_p;
    int f();
};
int S_func_0069c650::f()
{
    return m_p->m_x;
}
