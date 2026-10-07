// roc 2011-06 0070c980  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070c980
//
// 0070c980  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 0070c986  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070c980 {
    char pad0[340];
    int m_x;
    int f();
};
int S_func_0070c980::f()
{
    return m_x;
}
