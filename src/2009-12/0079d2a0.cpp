// roc 2009-12 0079d2a0  unit: seg_00790000  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079d2a0
//
// 0079d2a0  56                   push esi
// 0079d2a1  57                   push edi
// 0079d2a2  53                   push ebx
// 0079d2a3  8bf0                 mov esi, eax
// 0079d2a5  ff1528b89800         call dword ptr [0x98b828]
// 0079d2ab  83c09f               add eax, -0x61
// 0079d2ae  83c404               add esp, 4
// 0079d2b1  83f819               cmp eax, 0x19
// 0079d2b4  0f87b0000000         ja 0x79d36a
// 0079d2ba  0fb680a0d37900       movzx eax, byte ptr [eax + 0x79d3a0]
// 0079d2c1  8b3d5cb99800         mov edi, dword ptr [0x98b95c]
// 0079d2c7  ff248574d37900       jmp dword ptr [eax*4 + 0x79d374]
// 0079d2ce  56                   push esi
// 0079d2cf  ff154cb89800         call dword ptr [0x98b84c]
// 0079d2d5  83c404               add esp, 4
// 0079d2d8  8bf0                 mov esi, eax
// 0079d2da  eb75                 jmp 0x79d351
// 0079d2dc  56                   push esi
// 0079d2dd  ff1558b99800         call dword ptr [0x98b958]
// 0079d2e3  83c404               add esp, 4
// 0079d2e6  8bf0                 mov esi, eax
// 0079d2e8  eb67                 jmp 0x79d351
// 0079d2ea  56                   push esi
// 0079d2eb  ff15dcb89800         call dword ptr [0x98b8dc]
// 0079d2f1  83c404               add esp, 4
// 0079d2f4  8bf0                 mov esi, eax
// 0079d2f6  eb59                 jmp 0x79d351
// 0079d2f8  56                   push esi
// 0079d2f9  ffd7                 call edi
// 0079d2fb  83c404               add esp, 4
// 0079d2fe  8bf0                 mov esi, eax
// 0079d300  eb4f                 jmp 0x79d351
// 0079d302  56                   push esi
// 0079d303  ff1520b89800         call dword ptr [0x98b820]
// 0079d309  83c404               add esp, 4
// 0079d30c  8bf0                 mov esi, eax
// 0079d30e  eb41                 jmp 0x79d351
// 0079d310  56                   push esi
// 0079d311  ff1524b89800         call dword ptr [0x98b824]
// 0079d317  83c404               add esp, 4
// 0079d31a  8bf0                 mov esi, eax
// 0079d31c  eb33                 jmp 0x79d351
// 0079d31e  56                   push esi
// 0079d31f  ff1528b99800         call dword ptr [0x98b928]
// 0079d325  83c404               add esp, 4
// 0079d328  8bf0                 mov esi, eax
// 0079d32a  eb25                 jmp 0x79d351
// 0079d32c  56                   push esi
// 0079d32d  ff1554b99800         call dword ptr [0x98b954]
// 0079d333  83c404               add esp, 4
// 0079d336  8bf0                 mov esi, eax
// 0079d338  eb17                 jmp 0x79d351
// 0079d33a  56                   push esi
// 0079d33b  ff1550b99800         call dword ptr [0x98b950]
// 0079d341  83c404               add esp, 4
// 0079d344  8bf0                 mov esi, eax
// 0079d346  eb09                 jmp 0x79d351
// 0079d348  33c9                 xor ecx, ecx
// 0079d34a  85f6                 test esi, esi
// 0079d34c  0f94c1               sete cl
// 0079d34f  8bf1                 mov esi, ecx
// 0079d351  53                   push ebx
// 0079d352  ffd7                 call edi
// 0079d354  83c404               add esp, 4
// 0079d357  85c0                 test eax, eax
// 0079d359  7405                 je 0x79d360
// 0079d35b  5f                   pop edi
// 0079d35c  8bc6                 mov eax, esi
// 0079d35e  5e                   pop esi
// 0079d35f  c3                   ret 
// 0079d360  33c0                 xor eax, eax
// 0079d362  85f6                 test esi, esi
// 0079d364  5f                   pop edi
// 0079d365  0f94c0               sete al
// 0079d368  5e                   pop esi
// 0079d369  c3                   ret 
// 0079d36a  33c0                 xor eax, eax
// 0079d36c  3bde                 cmp ebx, esi
// 0079d36e  5f                   pop edi
// 0079d36f  0f94c0               sete al
// 0079d372  5e                   pop esi
// 0079d373  c3                   ret 
// 0079d374  ce                   into 
// 0079d375  d27900               sar byte ptr [ecx], cl
// copied from an identical function in another client (function _match_class)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c