// roc 2008-06 005d1670  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1670
//
// 005d1670  8a81a4010000         mov al, byte ptr [ecx + 0x1a4]
// 005d1676  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d1670 {
    char pad0[420];
    char m_x;
    char f();
};
char S_func_005d1670::f()
{
    return m_x;
}
