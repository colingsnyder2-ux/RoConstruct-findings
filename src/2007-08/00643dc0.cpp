// from server: 100% by colin
// roc 2007-08 00643dc0  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643dc0
//
// 00643dc0  53                   push ebx
// 00643dc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00643dc5  55                   push ebp
// 00643dc6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00643dca  56                   push esi
// 00643dcb  57                   push edi
// 00643dcc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00643dd0  57                   push edi
// 00643dd1  53                   push ebx
// 00643dd2  55                   push ebp
// 00643dd3  8bf1                 mov esi, ecx
// 00643dd5  e8b6ffffff           call 0x643d90
// 00643dda  8b442420             mov eax, dword ptr [esp + 0x20]
// 00643dde  50                   push eax
// 00643ddf  57                   push edi
// 00643de0  53                   push ebx
// 00643de1  55                   push ebp
// 00643de2  8bce                 mov ecx, esi
// 00643de4  e8f3bffeff           call 0x62fddc
// 00643de9  5f                   pop edi
// 00643dea  5e                   pop esi
// 00643deb  5d                   pop ebp
// 00643dec  5b                   pop ebx
// 00643ded  c21000               ret 0x10

struct CXTPCommandBar {
    void sub_643D90(int, int, int);
    void sub_62FDDC(int, int, int, int);
    void func(int, int, int, int);
};

void CXTPCommandBar::func(int a, int b, int c, int d) {
    sub_643D90(a, b, c);
    sub_62FDDC(a, b, c, d);
}
