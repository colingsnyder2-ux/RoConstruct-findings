// roc 2007-03 006d4b30  unit: seg_006d0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d4b30
//
// 006d4b30  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006d4b36  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 006d4b3c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006d4b30 {
    char pad[288];
    int m_x;
};
struct S_func_006d4b30 {
    char pad[284];
    I_func_006d4b30* m_p;
    int f();
};
int S_func_006d4b30::f()
{
    return m_p->m_x;
}
