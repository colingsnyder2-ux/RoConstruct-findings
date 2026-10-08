// roc 2007-03 0066f610  unit: seg_00660000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066f610
//
// 0066f610  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0066f613  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0066f619  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0066f610 {
    char pad[216];
    int m_x;
};
struct S_func_0066f610 {
    char pad[108];
    I_func_0066f610* m_p;
    int f();
};
int S_func_0066f610::f()
{
    return m_p->m_x;
}
