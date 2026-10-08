// from server: 100% by auto
// roc 2008-06 00662310  unit: RBX::FilterStairs  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662310
//
// 00662310  53                   push ebx
// 00662311  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00662314  56                   push esi
// 00662315  8b7314               mov esi, dword ptr [ebx + 0x14]
// 00662318  57                   push edi
// 00662319  33ff                 xor edi, edi
// 0066231b  85f6                 test esi, esi
// 0066231d  7413                 je 0x662332
// 0066231f  90                   nop 
// 00662320  807e0a00             cmp byte ptr [esi + 0xa], 0
// 00662324  751a                 jne 0x662340
// 00662326  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 0066232a  8b36                 mov esi, dword ptr [esi]
// 0066232c  0bf9                 or edi, ecx
// 0066232e  85f6                 test esi, esi
// 00662330  75ee                 jne 0x662320
// 00662332  6898c68400           push 0x84c698
// 00662337  50                   push eax
// 00662338  e8d31e0000           call 0x664210
// 0066233d  83c408               add esp, 8
// 00662340  85ff                 test edi, edi
// 00662342  7414                 je 0x662358
// 00662344  0fb65608             movzx edx, byte ptr [esi + 8]
// 00662348  6a00                 push 0
// 0066234a  6a00                 push 0
// 0066234c  52                   push edx
// 0066234d  6a23                 push 0x23
// 0066234f  53                   push ebx
// 00662350  e8db8e0000           call 0x66b230
// 00662355  83c414               add esp, 0x14
// 00662358  53                   push ebx
// 00662359  e852900000           call 0x66b3b0
// 0066235e  50                   push eax
// 0066235f  83c604               add esi, 4
// 00662362  56                   push esi
// 00662363  53                   push ebx
// 00662364  e8a7890000           call 0x66ad10
// 00662369  83c410               add esp, 0x10
// 0066236c  5f                   pop edi
// 0066236d  5e                   pop esi
// 0066236e  5b                   pop ebx
// 0066236f  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
