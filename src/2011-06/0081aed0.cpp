// roc 2011-06 0081aed0  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081aed0
//
// 0081aed0  53                   push ebx
// 0081aed1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0081aed5  55                   push ebp
// 0081aed6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0081aeda  56                   push esi
// 0081aedb  57                   push edi
// 0081aedc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0081aee0  57                   push edi
// 0081aee1  53                   push ebx
// 0081aee2  55                   push ebp
// 0081aee3  8bf1                 mov esi, ecx
// 0081aee5  e8b6ffffff           call 0x81aea0
// 0081aeea  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081aeee  50                   push eax
// 0081aeef  57                   push edi
// 0081aef0  53                   push ebx
// 0081aef1  55                   push ebp
// 0081aef2  8bce                 mov ecx, esi
// 0081aef4  e8dff2feff           call 0x80a1d8
// 0081aef9  5f                   pop edi
// 0081aefa  5e                   pop esi
// 0081aefb  5d                   pop ebp
// 0081aefc  5b                   pop ebx
// 0081aefd  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPCommandBar@ns_ROCX000006@@QAEXHHHH@Z)

namespace ns_ROCX000006 {
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
