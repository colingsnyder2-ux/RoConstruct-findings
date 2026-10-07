// roc 2011-06 006a5d70  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5d70
//
// 006a5d70  8a81e9010000         mov al, byte ptr [ecx + 0x1e9]
// 006a5d76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5d70 {
    char pad0[489];
    char m_x;
    char f();
};
char S_func_006a5d70::f()
{
    return m_x;
}
