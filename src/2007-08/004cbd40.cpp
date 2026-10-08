// roc 2007-08 004cbd40  unit: CSHA1  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbd40
//
// 004cbd40  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 004cbd46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cbd40 {
    char pad0[600];
    char m_x;
    char f();
};
char S_func_004cbd40::f()
{
    return m_x;
}
