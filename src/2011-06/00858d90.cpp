// roc 2011-06 00858d90  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858d90
//
// 00858d90  8b442404             mov eax, dword ptr [esp + 4]
// 00858d94  6a00                 push 0
// 00858d96  6a00                 push 0
// 00858d98  50                   push eax
// 00858d99  6a00                 push 0
// 00858d9b  e880dfffff           call 0x856d20
// 00858da0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX000031@ns_ROCX0000a3@@YGHH@Z)

namespace ns_ROCX000031 {
struct P_func_006d0690 { void g(); };
struct S_func_006d0690 {
    P_func_006d0690* m_p;
    void f();
};
void S_func_006d0690::f()
{
    m_p->g();
}
}
