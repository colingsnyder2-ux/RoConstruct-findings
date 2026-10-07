// roc 2011-06 0068ce60  unit: RBX::Backpack  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068ce60
//
// 0068ce60  8a4134               mov al, byte ptr [ecx + 0x34]
// 0068ce63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068ce60 {
    char pad0[52];
    char m_x;
    char f();
};
char S_func_0068ce60::f()
{
    return m_x;
}
