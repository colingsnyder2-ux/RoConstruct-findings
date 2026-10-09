// roc 2008-06 006f3b80  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3b80
//
// 006f3b80  8b442404             mov eax, dword ptr [esp + 4]
// 006f3b84  6aff                 push -1
// 006f3b86  50                   push eax
// 006f3b87  e8b4ffffff           call 0x6f3b40
// 006f3b8c  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX00002f@@QAEXH@Z)

namespace ns_ROCX00002f {
struct CXTPControls
{
    void sub_0067C560(int, int);
    void func_0067C5A0(int);
};

void CXTPControls::func_0067C5A0(int a)
{
    sub_0067C560(a, -1);
}
}
