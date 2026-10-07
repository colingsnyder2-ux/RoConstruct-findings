// roc 2008-06 0063b330  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b330
//
// 0063b330  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0063b336  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063b330 {
    char pad0[336];
    int m_x;
    int f();
};
int S_func_0063b330::f()
{
    return m_x;
}
