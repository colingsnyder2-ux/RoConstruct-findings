// from server: 100% by colin
// roc 2007-08 00535140  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535140
//
// 00535140  56                   push esi
// 00535141  8b742408             mov esi, dword ptr [esp + 8]
// 00535145  57                   push edi
// 00535146  6a00                 push 0
// 00535148  6a02                 push 2
// 0053514a  56                   push esi
// 0053514b  e800a20800           call 0x5bf350
// 00535150  8bf8                 mov edi, eax
// 00535152  a180be8a00           mov eax, dword ptr [0x8abe80]
// 00535157  50                   push eax
// 00535158  6a01                 push 1
// 0053515a  56                   push esi
// 0053515b  e8e0a00800           call 0x5bf240
// 00535160  56                   push esi
// 00535161  57                   push edi
// 00535162  50                   push eax
// 00535163  e8d8750300           call 0x56c740
// 00535168  83c424               add esp, 0x24
// 0053516b  5f                   pop edi
// 0053516c  33c0                 xor eax, eax
// 0053516e  5e                   pop esi
// 0053516f  c3                   ret 

extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE80;

int __cdecl sub_535140(int a)
{
    int v1 = sub_5BF350(a, 2, 0);
    int v2 = sub_5BF240(a, 1, dword_8ABE80);
    sub_56C740(v2, v1, a);
    return 0;
}
