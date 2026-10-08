// roc 2007-08 00684e90  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684e90
//
// 00684e90  c7413001000000       mov dword ptr [ecx + 0x30], 1
// 00684e97  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00684e90 {
    char pad0[48];
    int m_x;
    void f();
};
void S_func_00684e90::f()
{
    m_x = (int)1;
}
