// roc 2009-06 005d8480  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8480
//
// 005d8480  8a8194000000         mov al, byte ptr [ecx + 0x94]
// 005d8486  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d8480 {
    char pad0[148];
    char m_x;
    char f();
};
char S_func_005d8480::f()
{
    return m_x;
}
