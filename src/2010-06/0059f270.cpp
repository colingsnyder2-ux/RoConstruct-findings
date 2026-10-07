// roc 2010-06 0059f270  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f270
//
// 0059f270  8a819c000000         mov al, byte ptr [ecx + 0x9c]
// 0059f276  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059f270 {
    char pad0[156];
    char m_x;
    char f();
};
char S_func_0059f270::f()
{
    return m_x;
}
