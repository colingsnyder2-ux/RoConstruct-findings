// roc 2011-06 00922340  unit: RBX::AdornRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00922340
//
// 00922340  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00922343  8b8074080000         mov eax, dword ptr [eax + 0x874]
// 00922349  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00922340 {
    char pad[2164];
    int m_x;
};
struct S_func_00922340 {
    char pad[12];
    I_func_00922340* m_p;
    int f();
};
int S_func_00922340::f()
{
    return m_p->m_x;
}
