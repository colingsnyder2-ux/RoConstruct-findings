// roc 2010-06 00699aa0  unit: RBX::PolyContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699aa0
//
// 00699aa0  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 00699aa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00699aa0 {
    char pad0[212];
    int m_x;
    int f();
};
int S_func_00699aa0::f()
{
    return m_x;
}
