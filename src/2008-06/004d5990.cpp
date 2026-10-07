// roc 2008-06 004d5990  unit: CSHA1  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5990
//
// 004d5990  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 004d5996  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d5990 {
    char pad0[600];
    char m_x;
    char f();
};
char S_func_004d5990::f()
{
    return m_x;
}
