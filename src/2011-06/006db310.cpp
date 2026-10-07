// roc 2011-06 006db310  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db310
//
// 006db310  8d81e0000000         lea eax, [ecx + 0xe0]
// 006db316  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006db310 {
    char pad0[224];
    int m_x;
    int* f();
};
int* S_func_006db310::f()
{
    return &m_x;
}
