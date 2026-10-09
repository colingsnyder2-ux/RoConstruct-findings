// roc 2009-12 004010d0  unit: CAboutRobloxDialog  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004010d0
//
// 004010d0  8b442408             mov eax, dword ptr [esp + 8]
// 004010d4  56                   push esi
// 004010d5  8bf1                 mov esi, ecx
// 004010d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004010db  50                   push eax
// 004010dc  51                   push ecx
// 004010dd  8bce                 mov ecx, esi
// 004010df  e80a2a3f00           call 0x7f3aee
// 004010e4  6a00                 push 0
// 004010e6  8bce                 mov ecx, esi
// 004010e8  e8fb293f00           call 0x7f3ae8
// 004010ed  5e                   pop esi
// 004010ee  c20800               ret 8
// copied from an identical function in another client (function ?func@CAboutRobloxDialog@ns_ROCX000054@@QAEXHH@Z)

namespace ns_ROCX000054 {
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
