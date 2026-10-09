// from server: 56% by colin
// roc 2007-08 0068d4c0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068d4c0
//
// 0068d4c0  53                   push ebx
// 0068d4c1  56                   push esi
// 0068d4c2  57                   push edi
// 0068d4c3  8bf9                 mov edi, ecx
// 0068d4c5  33f6                 xor esi, esi
// 0068d4c7  e8547adeff           call 0x474f20
// 0068d4cc  85c0                 test eax, eax
// 0068d4ce  7e26                 jle 0x68d4f6
// 0068d4d0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0068d4d4  53                   push ebx
// 0068d4d5  56                   push esi
// 0068d4d6  8bcf                 mov ecx, edi
// 0068d4d8  e803e9ffff           call 0x68bde0
// 0068d4dd  8bc8                 mov ecx, eax
// 0068d4df  e89ce4ffff           call 0x68b980
// 0068d4e4  85c0                 test eax, eax
// 0068d4e6  7510                 jne 0x68d4f8
// 0068d4e8  8bcf                 mov ecx, edi
// 0068d4ea  83c601               add esi, 1
// 0068d4ed  e82e7adeff           call 0x474f20
// 0068d4f2  3bf0                 cmp esi, eax
// 0068d4f4  7cde                 jl 0x68d4d4
// 0068d4f6  33c0                 xor eax, eax
// 0068d4f8  5f                   pop edi
// 0068d4f9  5e                   pop esi
// 0068d4fa  5b                   pop ebx
// 0068d4fb  c20400               ret 4

struct CXTPTabClientWnd_CSingleWorkspace
{
    int sub_474f20();
    int sub_68bde0(int, int);
    int sub_68b980();
    int func_0068d4c0(int);
};

int CXTPTabClientWnd_CSingleWorkspace::func_0068d4c0(int a1)
{
    int i = 0;
    int n = sub_474f20();
    if (n > 0)
    {
        do
        {
            int r = sub_68bde0(i, a1);
            if (sub_68b980() != 0)
                return r;
            i++;
            n = sub_474f20();
        } while (i < n);
    }
    return 0;
}
