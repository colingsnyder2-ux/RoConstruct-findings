// from server: 100% by colin
// roc 2007-08 0064b330  unit: CXTPImageManagerIcon  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b330
//
// 0064b330  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064b335  56                   push esi
// 0064b336  8b742408             mov esi, dword ptr [esp + 8]
// 0064b33a  57                   push edi
// 0064b33b  8bf9                 mov edi, ecx
// 0064b33d  7426                 je 0x64b365
// 0064b33f  6a0e                 push 0xe
// 0064b341  56                   push esi
// 0064b342  e83151feff           call 0x630478
// 0064b347  85c0                 test eax, eax
// 0064b349  741a                 je 0x64b365
// 0064b34b  6a01                 push 1
// 0064b34d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064b351  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064b355  51                   push ecx
// 0064b356  52                   push edx
// 0064b357  56                   push esi
// 0064b358  50                   push eax
// 0064b359  8bcf                 mov ecx, edi
// 0064b35b  e850e3ffff           call 0x6496b0
// 0064b360  5f                   pop edi
// 0064b361  5e                   pop esi
// 0064b362  c21000               ret 0x10
// 0064b365  6a03                 push 3
// 0064b367  56                   push esi
// 0064b368  e80b51feff           call 0x630478
// 0064b36d  85c0                 test eax, eax
// 0064b36f  7404                 je 0x64b375
// 0064b371  6a00                 push 0
// 0064b373  ebd8                 jmp 0x64b34d
// 0064b375  5f                   pop edi
// 0064b376  33c0                 xor eax, eax
// 0064b378  5e                   pop esi
// 0064b379  c21000               ret 0x10

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
