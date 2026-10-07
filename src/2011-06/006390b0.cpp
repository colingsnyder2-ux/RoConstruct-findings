// roc 2011-06 006390b0  unit: RBX::Game  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006390b0
//
// 006390b0  8a81bc000000         mov al, byte ptr [ecx + 0xbc]
// 006390b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006390b0 {
    char pad0[188];
    char m_x;
    char f();
};
char S_func_006390b0::f()
{
    return m_x;
}
