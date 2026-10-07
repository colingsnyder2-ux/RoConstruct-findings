// roc 2008-06 005a0490  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0490
//
// 005a0490  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 005a0496  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a0490 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_005a0490::f()
{
    return m_x;
}
