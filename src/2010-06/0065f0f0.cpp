// roc 2010-06 0065f0f0  unit: RBX::Backpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f0f0
//
// 0065f0f0  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0065f0f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065f0f0 {
    char pad0[336];
    int m_x;
    int f();
};
int S_func_0065f0f0::f()
{
    return m_x;
}
