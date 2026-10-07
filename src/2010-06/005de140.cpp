// roc 2010-06 005de140  unit: RBX::TopMenuBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005de140
//
// 005de140  8a81bc000000         mov al, byte ptr [ecx + 0xbc]
// 005de146  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005de140 {
    char pad0[188];
    char m_x;
    char f();
};
char S_func_005de140::f()
{
    return m_x;
}
