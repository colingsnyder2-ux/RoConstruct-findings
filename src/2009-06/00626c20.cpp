// roc 2009-06 00626c20  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626c20
//
// 00626c20  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 00626c26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00626c20 {
    char pad0[288];
    int m_x;
    int f();
};
int S_func_00626c20::f()
{
    return m_x;
}
