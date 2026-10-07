// roc 2009-06 00606c80  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00606c80
//
// 00606c80  8a8168010000         mov al, byte ptr [ecx + 0x168]
// 00606c86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00606c80 {
    char pad0[360];
    char m_x;
    char f();
};
char S_func_00606c80::f()
{
    return m_x;
}
