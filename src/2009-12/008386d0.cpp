// roc 2009-12 008386d0  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008386d0
//
// 008386d0  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008386d6  e9a574fdff           jmp 0x80fb80
// copied from an identical function in another client (function ?f@S_func_00670f10@ns_ROCX0000e5@@QAEXXZ)

namespace ns_ROCX0000e5 {
struct P_func_00670f10 { void g(); };
struct S_func_00670f10 {
    char pad[228];
    P_func_00670f10* m_p;
    void f();
};
void S_func_00670f10::f()
{
    m_p->g();
}
}
