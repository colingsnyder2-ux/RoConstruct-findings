// roc 2007-03 00721990  unit: seg_00720000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721990
//
// 00721990  51                   push ecx
// 00721991  8b542408             mov edx, dword ptr [esp + 8]
// 00721995  8d0424               lea eax, [esp]
// 00721998  50                   push eax
// 00721999  52                   push edx
// 0072199a  c744240800000000     mov dword ptr [esp + 8], 0
// 007219a2  e8d7980100           call 0x73b27e
// 007219a7  f7d8                 neg eax
// 007219a9  1bc0                 sbb eax, eax
// 007219ab  230424               and eax, dword ptr [esp]
// 007219ae  59                   pop ecx
// 007219af  c20400               ret 4
// copied from an identical function in another client (function ?method@CXTPDockingPaneKeyboardHook@ns_ROCX000074@@QAEHH@Z)

namespace ns_ROCX000074 {
struct CXTPDockingPaneKeyboardHook
{
    int sub_00634A60(int, int*);
    int method(int);
};

int CXTPDockingPaneKeyboardHook::method(int arg)
{
    int local = 0;
    int result = sub_00634A60(arg, &local);
    return (result != 0) ? local : 0;
}
}
