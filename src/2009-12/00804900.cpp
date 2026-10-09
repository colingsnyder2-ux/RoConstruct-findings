// roc 2009-12 00804900  unit: CXTPCommandBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804900
//
// 00804900  53                   push ebx
// 00804901  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00804905  55                   push ebp
// 00804906  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0080490a  56                   push esi
// 0080490b  57                   push edi
// 0080490c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00804910  57                   push edi
// 00804911  53                   push ebx
// 00804912  55                   push ebp
// 00804913  8bf1                 mov esi, ecx
// 00804915  e8b6ffffff           call 0x8048d0
// 0080491a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080491e  50                   push eax
// 0080491f  57                   push edi
// 00804920  53                   push ebx
// 00804921  55                   push ebp
// 00804922  8bce                 mov ecx, esi
// 00804924  e8b1f0feff           call 0x7f39da
// 00804929  5f                   pop edi
// 0080492a  5e                   pop esi
// 0080492b  5d                   pop ebp
// 0080492c  5b                   pop ebx
// 0080492d  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPCommandBar@ns_ROCX000002@@QAEXHHHH@Z)

namespace ns_ROCX000002 {
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
