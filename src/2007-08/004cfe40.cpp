// roc 2007-08 004cfe40  unit: RBX::TextureProxyBase  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe40
//
// 004cfe40  8a81d5010000         mov al, byte ptr [ecx + 0x1d5]
// 004cfe46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cfe40 {
    char pad0[469];
    char m_x;
    char f();
};
char S_func_004cfe40::f()
{
    return m_x;
}
