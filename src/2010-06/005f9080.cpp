// roc 2010-06 005f9080  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9080
//
// 005f9080  8a8144010000         mov al, byte ptr [ecx + 0x144]
// 005f9086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f9080 {
    char pad0[324];
    char m_x;
    char f();
};
char S_func_005f9080::f()
{
    return m_x;
}
