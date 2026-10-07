// roc 2011-06 00601f60  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00601f60
//
// 00601f60  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00601f66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00601f60 {
    char pad0[192];
    int m_x;
    int f();
};
int S_func_00601f60::f()
{
    return m_x;
}
