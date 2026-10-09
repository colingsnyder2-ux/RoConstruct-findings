// roc 2010-06 007b8a00  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8a00
//
// 007b8a00  53                   push ebx
// 007b8a01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007b8a05  55                   push ebp
// 007b8a06  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007b8a0a  56                   push esi
// 007b8a0b  57                   push edi
// 007b8a0c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b8a10  57                   push edi
// 007b8a11  53                   push ebx
// 007b8a12  55                   push ebp
// 007b8a13  8bf1                 mov esi, ecx
// 007b8a15  e8b6ffffff           call 0x7b89d0
// 007b8a1a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007b8a1e  50                   push eax
// 007b8a1f  57                   push edi
// 007b8a20  53                   push ebx
// 007b8a21  55                   push ebp
// 007b8a22  8bce                 mov ecx, esi
// 007b8a24  e8f1f0feff           call 0x7a7b1a
// 007b8a29  5f                   pop edi
// 007b8a2a  5e                   pop esi
// 007b8a2b  5d                   pop ebp
// 007b8a2c  5b                   pop ebx
// 007b8a2d  c21000               ret 0x10
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
