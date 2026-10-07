// roc 2008-06 00574570  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574570
//
// 00574570  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 00574576  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00574570 {
    char pad0[352];
    int m_x;
    int f();
};
int S_func_00574570::f()
{
    return m_x;
}
