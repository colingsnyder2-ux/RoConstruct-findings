// from server: 100% by king_originala
// roc 2008-06 00456310  unit: CRobloxReportDocView  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456310
//
// 00456310  53                   push ebx
// 00456311  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00456315  55                   push ebp
// 00456316  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0045631a  56                   push esi
// 0045631b  57                   push edi
// 0045631c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00456320  53                   push ebx
// 00456321  55                   push ebp
// 00456322  57                   push edi
// 00456323  8bf1                 mov esi, ecx
// 00456325  e89ea92400           call 0x6a0cc8
// 0045632a  85ff                 test edi, edi
// 0045632c  7415                 je 0x456343
// 0045632e  8b4654               mov eax, dword ptr [esi + 0x54]
// 00456331  50                   push eax
// 00456332  6a01                 push 1
// 00456334  e867f7faff           call 0x405aa0
// 00456339  83c408               add esp, 8
// 0045633c  5f                   pop edi
// 0045633d  5e                   pop esi
// 0045633e  5d                   pop ebp
// 0045633f  5b                   pop ebx
// 00456340  c20c00               ret 0xc
// 00456343  3beb                 cmp ebp, ebx
// 00456345  740e                 je 0x456355
// 00456347  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0045634a  51                   push ecx
// 0045634b  6a00                 push 0
// 0045634d  e84ef7faff           call 0x405aa0
// 00456352  83c408               add esp, 8
// 00456355  5f                   pop edi
// 00456356  5e                   pop esi
// 00456357  5d                   pop ebp
// 00456358  5b                   pop ebx
// 00456359  c20c00               ret 0xc

extern void __cdecl G1_func_00405aa0(int, int);

struct S
{
    char padding[0x54];
    int field54;

    void G1_func_006a0cc8(int, int, int);
    void func_00456310(int, int, int);
};

void S::func_00456310(int a, int b, int c)
{
    G1_func_006a0cc8(a, b, c);
    if (a)
        G1_func_00405aa0(1, field54);
    else if (b != c)
        G1_func_00405aa0(0, field54);
}
