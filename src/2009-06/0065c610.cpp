// roc 2009-06 0065c610  unit: RBX::PartInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065c610
//
// 0065c610  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0065c616  83c054               add eax, 0x54
// 0065c619  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065c610 {
    char pad0[280];
    int m_x;
    int f();
};
int S_func_0065c610::f()
{
    return m_x + 0x54;
}
