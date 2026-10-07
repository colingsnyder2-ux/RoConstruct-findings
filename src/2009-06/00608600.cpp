// roc 2009-06 00608600  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00608600
//
// 00608600  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00608606  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00608600 {
    char pad0[188];
    int m_x;
    int f();
};
int S_func_00608600::f()
{
    return m_x;
}
