// roc 2007-08 005567e0  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005567e0
//
// 005567e0  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 005567e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005567e0 {
    char pad0[280];
    int m_x;
    int f();
};
int S_func_005567e0::f()
{
    return m_x;
}
