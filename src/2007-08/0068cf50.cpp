// from server: 84% by colin
// roc 2007-08 0068cf50  unit: CXTPTabClientWnd  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068cf50
//
// 0068cf50  57                   push edi
// 0068cf51  8bf9                 mov edi, ecx
// 0068cf53  83bfc000000000       cmp dword ptr [edi + 0xc0], 0
// 0068cf5a  7506                 jne 0x68cf62
// 0068cf5c  33c0                 xor eax, eax
// 0068cf5e  5f                   pop edi
// 0068cf5f  c20800               ret 8
// 0068cf62  53                   push ebx
// 0068cf63  55                   push ebp
// 0068cf64  56                   push esi
// 0068cf65  33f6                 xor esi, esi
// 0068cf67  e8b47fdeff           call 0x474f20
// 0068cf6c  85c0                 test eax, eax
// 0068cf6e  7e2b                 jle 0x68cf9b
// 0068cf70  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0068cf74  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0068cf78  53                   push ebx
// 0068cf79  55                   push ebp
// 0068cf7a  56                   push esi
// 0068cf7b  8bcf                 mov ecx, edi
// 0068cf7d  e85eeeffff           call 0x68bde0
// 0068cf82  8bc8                 mov ecx, eax
// 0068cf84  e8d7180700           call 0x6fe860
// 0068cf89  85c0                 test eax, eax
// 0068cf8b  7510                 jne 0x68cf9d
// 0068cf8d  8bcf                 mov ecx, edi
// 0068cf8f  83c601               add esi, 1
// 0068cf92  e8897fdeff           call 0x474f20
// 0068cf97  3bf0                 cmp esi, eax
// 0068cf99  7cdd                 jl 0x68cf78
// 0068cf9b  33c0                 xor eax, eax
// 0068cf9d  5e                   pop esi
// 0068cf9e  5d                   pop ebp
// 0068cf9f  5b                   pop ebx
// 0068cfa0  5f                   pop edi
// 0068cfa1  c20800               ret 8

struct CXTPTabClientWnd {
    char pad[0xc0];
    int field_0xc0;
    int method_474f20();
    int method_68bde0(int, int, int);

    int method_68cf50(int a, int b);
};

extern "C" int __stdcall sub_6fe860(int);

int CXTPTabClientWnd::method_68cf50(int a, int b) {
    if (field_0xc0 == 0)
        return 0;
    int count = method_474f20();
    int i = 0;
    if (count > 0) {
        do {
            int r = method_68bde0(i, a, b);
            if (sub_6fe860(r) != 0)
                return r;
            i++;
        } while (i < method_474f20());
    }
    return 0;
}
