// roc 2010-06 00804110  unit: CXTPPropExchange  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804110
//
// 00804110  c7413401000000       mov dword ptr [ecx + 0x34], 1
// 00804117  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00804110 {
    char pad0[52];
    int m_x;
    void f();
};
void S_func_00804110::f()
{
    m_x = (int)1;
}
