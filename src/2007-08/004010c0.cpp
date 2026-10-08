// from server: 100% by colin
// roc 2007-08 004010c0  unit: CAboutRobloxDialog  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004010c0
//
// 004010c0  8b442408             mov eax, dword ptr [esp + 8]
// 004010c4  56                   push esi
// 004010c5  8bf1                 mov esi, ecx
// 004010c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004010cb  50                   push eax
// 004010cc  51                   push ecx
// 004010cd  8bce                 mov ecx, esi
// 004010cf  e81cee2200           call 0x62fef0
// 004010d4  6a00                 push 0
// 004010d6  8bce                 mov ecx, esi
// 004010d8  e80dee2200           call 0x62feea
// 004010dd  5e                   pop esi
// 004010de  c20800               ret 8

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
