// roc 2011-06 00630370  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00630370
//
// 00630370  8a81d0010000         mov al, byte ptr [ecx + 0x1d0]
// 00630376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00630370 {
    char pad0[464];
    char m_x;
    char f();
};
char S_func_00630370::f()
{
    return m_x;
}
