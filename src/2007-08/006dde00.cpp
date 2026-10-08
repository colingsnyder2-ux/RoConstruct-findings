// from server: 87% by colin
// roc 2007-08 006dde00  unit: CXTPDockingPaneKeyboardHook  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dde00
//
// 006dde00  51                   push ecx
// 006dde01  8b542408             mov edx, dword ptr [esp + 8]
// 006dde05  8d0424               lea eax, [esp]
// 006dde08  50                   push eax
// 006dde09  52                   push edx
// 006dde0a  83c108               add ecx, 8
// 006dde0d  c744240800000000     mov dword ptr [esp + 8], 0
// 006dde15  e8466cf5ff           call 0x634a60
// 006dde1a  f7d8                 neg eax
// 006dde1c  1bc0                 sbb eax, eax
// 006dde1e  230424               and eax, dword ptr [esp]
// 006dde21  59                   pop ecx
// 006dde22  c20400               ret 4

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
