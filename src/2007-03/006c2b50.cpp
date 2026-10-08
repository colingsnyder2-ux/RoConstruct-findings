// roc 2007-03 006c2b50  unit: seg_006c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c2b50
//
// 006c2b50  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 006c2b56  8b4014               mov eax, dword ptr [eax + 0x14]
// 006c2b59  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006c2b50 {
    char pad[20];
    int m_x;
};
struct S_func_006c2b50 {
    char pad[132];
    I_func_006c2b50* m_p;
    int f();
};
int S_func_006c2b50::f()
{
    return m_p->m_x;
}
