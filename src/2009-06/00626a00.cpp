// roc 2009-06 00626a00  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626a00
//
// 00626a00  8a8100010000         mov al, byte ptr [ecx + 0x100]
// 00626a06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00626a00 {
    char pad0[256];
    char m_x;
    char f();
};
char S_func_00626a00::f()
{
    return m_x;
}
