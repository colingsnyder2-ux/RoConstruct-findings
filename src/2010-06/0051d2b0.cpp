// roc 2010-06 0051d2b0  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051d2b0
//
// 0051d2b0  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 0051d2b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051d2b0 {
    char pad0[600];
    char m_x;
    char f();
};
char S_func_0051d2b0::f()
{
    return m_x;
}
