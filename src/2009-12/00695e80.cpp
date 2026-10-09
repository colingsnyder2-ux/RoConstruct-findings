// roc 2009-12 00695e80  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695e80
//
// 00695e80  c6411400             mov byte ptr [ecx + 0x14], 0
// 00695e84  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00626f00@ns_ROCX00007f@@QAEXXZ)

namespace ns_ROCX00007f {
struct S_func_00626f00 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_00626f00::f()
{
    m_x = (char)0;
}
}
