// roc 2008-06 006b5250  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5250
//
// 006b5250  53                   push ebx
// 006b5251  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006b5255  55                   push ebp
// 006b5256  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006b525a  56                   push esi
// 006b525b  57                   push edi
// 006b525c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006b5260  57                   push edi
// 006b5261  53                   push ebx
// 006b5262  55                   push ebp
// 006b5263  8bf1                 mov esi, ecx
// 006b5265  e8b6ffffff           call 0x6b5220
// 006b526a  8b442420             mov eax, dword ptr [esp + 0x20]
// 006b526e  50                   push eax
// 006b526f  57                   push edi
// 006b5270  53                   push ebx
// 006b5271  55                   push ebp
// 006b5272  8bce                 mov ecx, esi
// 006b5274  e887b5feff           call 0x6a0800
// 006b5279  5f                   pop edi
// 006b527a  5e                   pop esi
// 006b527b  5d                   pop ebp
// 006b527c  5b                   pop ebx
// 006b527d  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPCommandBar@ns_ROCX000004@@QAEXHHHH@Z)

namespace ns_ROCX000004 {
struct CXTPCommandBar {
    void sub_643D90(int, int, int);
    void sub_62FDDC(int, int, int, int);
    void func(int, int, int, int);
};

void CXTPCommandBar::func(int a, int b, int c, int d) {
    sub_643D90(a, b, c);
    sub_62FDDC(a, b, c, d);
}
}
