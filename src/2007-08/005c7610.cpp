// from server: 69% by colin
// roc 2007-08 005c7610  unit: lua_exception  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7610
//
// 005c7610  56                   push esi
// 005c7611  8b742408             mov esi, dword ptr [esp + 8]
// 005c7615  57                   push edi
// 005c7616  6844997b00           push 0x7b9944
// 005c761b  6a01                 push 1
// 005c761d  56                   push esi
// 005c761e  e81d7cffff           call 0x5bf240
// 005c7623  8b38                 mov edi, dword ptr [eax]
// 005c7625  83c40c               add esp, 0xc
// 005c7628  85ff                 test edi, edi
// 005c762a  7425                 je 0x5c7651
// 005c762c  53                   push ebx
// 005c762d  8b1d8ce87700         mov ebx, dword ptr [0x77e88c]
// 005c7633  ffd3                 call ebx
// 005c7635  3bf8                 cmp edi, eax
// 005c7637  7417                 je 0x5c7650
// 005c7639  ffd3                 call ebx
// 005c763b  83c020               add eax, 0x20
// 005c763e  3bf8                 cmp edi, eax
// 005c7640  740e                 je 0x5c7650
// 005c7642  ffd3                 call ebx
// 005c7644  83c040               add eax, 0x40
// 005c7647  3bf8                 cmp edi, eax
// 005c7649  7405                 je 0x5c7650
// 005c764b  e810ffffff           call 0x5c7560
// 005c7650  5b                   pop ebx
// 005c7651  5f                   pop edi
// 005c7652  33c0                 xor eax, eax
// 005c7654  5e                   pop esi
// 005c7655  c3                   ret 

extern "C" int __cdecl __iob_func();

extern int G1;
extern int G2;

int __cdecl sub_5bf240(int, int, int);
void __cdecl sub_5c7560();

int __cdecl sub_5c7610(int a)
{
    int* p = (int*)sub_5bf240(a, 1, (int)&G1);
    int v = *p;
    if (v != 0)
    {
        int (*fp)() = (int (*)())G2;
        int r = fp();
        if (v != r)
        {
            r = fp();
            if (v != r + 0x20)
            {
                r = fp();
                if (v != r + 0x40)
                {
                    sub_5c7560();
                }
            }
        }
    }
    return 0;
}
