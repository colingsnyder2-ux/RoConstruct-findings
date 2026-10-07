// roc 2010-06 005f9600  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9600
//
// 005f9600  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 005f9606  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f9600 {
    char pad0[356];
    int m_x;
    int f();
};
int S_func_005f9600::f()
{
    return m_x;
}
