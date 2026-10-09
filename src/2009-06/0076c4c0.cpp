// roc 2009-06 0076c4c0  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076c4c0
//
// 0076c4c0  8b442404             mov eax, dword ptr [esp + 4]
// 0076c4c4  6aff                 push -1
// 0076c4c6  50                   push eax
// 0076c4c7  e8b4ffffff           call 0x76c480
// 0076c4cc  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX00002a@@QAEXH@Z)

namespace ns_ROCX00002a {
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
