// roc 2010-06 005de890  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005de890
//
// 005de890  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 005de896  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005de890 {
    char pad0[196];
    int m_x;
    int f();
};
int S_func_005de890::f()
{
    return m_x;
}
