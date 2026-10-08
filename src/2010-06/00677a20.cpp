// roc 2010-06 00677a20  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00677a20
//
// 00677a20  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00677a26  83c004               add eax, 4
// 00677a29  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00677a20 {
    char pad0[240];
    int m_x;
    int f();
};
int S_func_00677a20::f()
{
    return m_x + 4;
}
