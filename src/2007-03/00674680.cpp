// roc 2007-03 00674680  unit: seg_00670000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00674680
//
// 00674680  8b442404             mov eax, dword ptr [esp + 4]
// 00674684  6aff                 push -1
// 00674686  50                   push eax
// 00674687  e8b4ffffff           call 0x674640
// 0067468c  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
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
