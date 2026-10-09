// roc 2009-06 0072d7c0  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d7c0
//
// 0072d7c0  53                   push ebx
// 0072d7c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0072d7c5  55                   push ebp
// 0072d7c6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0072d7ca  56                   push esi
// 0072d7cb  57                   push edi
// 0072d7cc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0072d7d0  57                   push edi
// 0072d7d1  53                   push ebx
// 0072d7d2  55                   push ebp
// 0072d7d3  8bf1                 mov esi, ecx
// 0072d7d5  e8b6ffffff           call 0x72d790
// 0072d7da  8b442420             mov eax, dword ptr [esp + 0x20]
// 0072d7de  50                   push eax
// 0072d7df  57                   push edi
// 0072d7e0  53                   push ebx
// 0072d7e1  55                   push ebp
// 0072d7e2  8bce                 mov ecx, esi
// 0072d7e4  e8c9b3feff           call 0x718bb2
// 0072d7e9  5f                   pop edi
// 0072d7ea  5e                   pop esi
// 0072d7eb  5d                   pop ebp
// 0072d7ec  5b                   pop ebx
// 0072d7ed  c21000               ret 0x10
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
