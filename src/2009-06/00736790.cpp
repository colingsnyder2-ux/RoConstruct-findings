// roc 2009-06 00736790  unit: CXTPImageManagerIconSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00736790
//
// 00736790  837c241000           cmp dword ptr [esp + 0x10], 0
// 00736795  56                   push esi
// 00736796  8b742408             mov esi, dword ptr [esp + 8]
// 0073679a  57                   push edi
// 0073679b  8bf9                 mov edi, ecx
// 0073679d  7426                 je 0x7367c5
// 0073679f  6a0e                 push 0xe
// 007367a1  56                   push esi
// 007367a2  e80f2cfeff           call 0x7193b6
// 007367a7  85c0                 test eax, eax
// 007367a9  741a                 je 0x7367c5
// 007367ab  6a01                 push 1
// 007367ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007367b1  8b542414             mov edx, dword ptr [esp + 0x14]
// 007367b5  51                   push ecx
// 007367b6  52                   push edx
// 007367b7  56                   push esi
// 007367b8  50                   push eax
// 007367b9  8bcf                 mov ecx, edi
// 007367bb  e880f5ffff           call 0x735d40
// 007367c0  5f                   pop edi
// 007367c1  5e                   pop esi
// 007367c2  c21000               ret 0x10
// 007367c5  6a03                 push 3
// 007367c7  56                   push esi
// 007367c8  e8e92bfeff           call 0x7193b6
// 007367cd  85c0                 test eax, eax
// 007367cf  7404                 je 0x7367d5
// 007367d1  6a00                 push 0
// 007367d3  ebd8                 jmp 0x7367ad
// 007367d5  5f                   pop edi
// 007367d6  33c0                 xor eax, eax
// 007367d8  5e                   pop esi
// 007367d9  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000025@@QAEHHHHH@Z)

namespace ns_ROCX000025 {
struct CXTPImageManagerIcon {
    int sub_6496B0(int, int, int, int, int);
    int func(int, int, int, int);
};

extern "C" int __stdcall sub_630478(int, int);

int CXTPImageManagerIcon::func(int a, int b, int c, int d) {
    int result;
    if (d != 0) {
        result = sub_630478(a, 0xe);
        if (result != 0) {
            return sub_6496B0(result, a, b, c, 1);
        }
    }
    result = sub_630478(a, 3);
    if (result != 0) {
        return sub_6496B0(result, a, b, c, 0);
    }
    return 0;
}
}
