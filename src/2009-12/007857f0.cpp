// roc 2009-12 007857f0  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007857f0
//
// 007857f0  c6411401             mov byte ptr [ecx + 0x14], 1
// 007857f4  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006b5be0@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
struct S_func_006b5be0 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_006b5be0::f()
{
    m_x = (char)1;
}
}
