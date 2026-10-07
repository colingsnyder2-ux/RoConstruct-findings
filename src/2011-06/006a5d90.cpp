// roc 2011-06 006a5d90  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5d90
//
// 006a5d90  8a81f5020000         mov al, byte ptr [ecx + 0x2f5]
// 006a5d96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5d90 {
    char pad0[757];
    char m_x;
    char f();
};
char S_func_006a5d90::f()
{
    return m_x;
}
