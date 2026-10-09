// roc 2009-12 008f38a0  unit: CXTWndHook  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f38a0
//
// 008f38a0  51                   push ecx
// 008f38a1  8b542408             mov edx, dword ptr [esp + 8]
// 008f38a5  8d0424               lea eax, [esp]
// 008f38a8  50                   push eax
// 008f38a9  52                   push edx
// 008f38aa  c744240800000000     mov dword ptr [esp + 8], 0
// 008f38b2  e839320300           call 0x926af0
// 008f38b7  f7d8                 neg eax
// 008f38b9  1bc0                 sbb eax, eax
// 008f38bb  230424               and eax, dword ptr [esp]
// 008f38be  59                   pop ecx
// 008f38bf  c20400               ret 4
// copied from an identical function in another client (function ?method@CXTPDockingPaneKeyboardHook@ns_ROCX00006e@@QAEHH@Z)

namespace ns_ROCX00006e {
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
