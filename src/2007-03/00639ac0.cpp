// roc 2007-03 00639ac0  unit: seg_00630000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00639ac0
//
// 00639ac0  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00639ac6  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00639ac9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00639ac0 {
    char pad[44];
    int m_x;
};
struct S_func_00639ac0 {
    char pad[244];
    I_func_00639ac0* m_p;
    int f();
};
int S_func_00639ac0::f()
{
    return m_p->m_x;
}
