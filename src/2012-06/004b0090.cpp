// roc 2012-06 004b0090  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0090
//
// 004b0090  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 004b0096  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b0090 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_004b0090::f()
{
    return m_x;
}
