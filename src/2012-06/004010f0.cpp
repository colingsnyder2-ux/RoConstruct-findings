// roc 2012-06 004010f0  unit: CAboutRobloxDialog  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004010f0
//
// 004010f0  8b442408             mov eax, dword ptr [esp + 8]
// 004010f4  56                   push esi
// 004010f5  8bf1                 mov esi, ecx
// 004010f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004010fb  50                   push eax
// 004010fc  51                   push ecx
// 004010fd  8bce                 mov ecx, esi
// 004010ff  e89e125800           call 0x9823a2
// 00401104  6a00                 push 0
// 00401106  8bce                 mov ecx, esi
// 00401108  e88f125800           call 0x98239c
// 0040110d  5e                   pop esi
// 0040110e  c20800               ret 8
// copied from an identical function in another client (function ?func@CAboutRobloxDialog@ns_ROCX000047@@QAEXHH@Z)

namespace ns_ROCX000047 {
struct CAboutRobloxDialog {
    void sub_62fef0(int, int);
    void sub_62feea(int);
    void func(int a, int b);
};

void CAboutRobloxDialog::func(int a, int b)
{
    sub_62fef0(a, b);
    sub_62feea(0);
}
}
