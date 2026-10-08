// from server: 100% by colin
// roc 2007-08 00693600  unit: CXTPStatusBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693600
//
// 00693600  56                   push esi
// 00693601  8bf1                 mov esi, ecx
// 00693603  e836ccf9ff           call 0x63023e
// 00693608  6a00                 push 0
// 0069360a  6a01                 push 1
// 0069360c  8bce                 mov ecx, esi
// 0069360e  e8bdfdffff           call 0x6933d0
// 00693613  8b4620               mov eax, dword ptr [esi + 0x20]
// 00693616  6a00                 push 0
// 00693618  6a00                 push 0
// 0069361a  50                   push eax
// 0069361b  ff15dcec7700         call dword ptr [0x77ecdc]
// 00693621  5e                   pop esi
// 00693622  c20c00               ret 0xc

struct CXTPStatusBar {
    void sub_63023E();
    void sub_6933D0(int, int);
    void OnSomething(int, int, int);
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTPStatusBar::OnSomething(int a, int b, int c)
{
    sub_63023E();
    sub_6933D0(1, 0);
    InvalidateRect(*(void**)((char*)this + 0x20), 0, 0);
}
