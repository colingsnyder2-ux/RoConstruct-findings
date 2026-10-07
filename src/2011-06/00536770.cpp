// roc 2011-06 00536770  unit: CSHA1  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536770
//
// 00536770  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 00536776  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00536770 {
    char pad0[600];
    char m_x;
    char f();
};
char S_func_00536770::f()
{
    return m_x;
}
