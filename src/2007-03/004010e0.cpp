// roc 2007-03 004010e0  unit: seg_00400000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004010e0
//
// 004010e0  8b442408             mov eax, dword ptr [esp + 8]
// 004010e4  56                   push esi
// 004010e5  8bf1                 mov esi, ecx
// 004010e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004010eb  50                   push eax
// 004010ec  51                   push ecx
// 004010ed  8bce                 mov ecx, esi
// 004010ef  e890d22100           call 0x61e384
// 004010f4  6a00                 push 0
// 004010f6  8bce                 mov ecx, esi
// 004010f8  e881d22100           call 0x61e37e
// 004010fd  5e                   pop esi
// 004010fe  c20800               ret 8
// copied from an identical function in another client (function ?func@CAboutRobloxDialog@ns_ROCX000003@@QAEXHH@Z)

namespace ns_ROCX000003 {
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
