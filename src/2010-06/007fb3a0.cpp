// roc 2010-06 007fb3a0  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fb3a0
//
// 007fb3a0  8b442404             mov eax, dword ptr [esp + 4]
// 007fb3a4  6a00                 push 0
// 007fb3a6  6a00                 push 0
// 007fb3a8  50                   push eax
// 007fb3a9  6a00                 push 0
// 007fb3ab  e830e0ffff           call 0x7f93e0
// 007fb3b0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX00002c@ns_ROCX00007c@@YGHH@Z)

namespace ns_ROCX00002c {
struct S_func_00754580 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_00754580::f()
{
    return m_x;
}
}
