// roc 2007-03 00661720  unit: seg_00660000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00661720
//
// 00661720  8b81ac010000         mov eax, dword ptr [ecx + 0x1ac]
// 00661726  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0066172c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00661720 {
    char pad[184];
    int m_x;
};
struct S_func_00661720 {
    char pad[428];
    I_func_00661720* m_p;
    int f();
};
int S_func_00661720::f()
{
    return m_p->m_x;
}
