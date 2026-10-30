// from server: 100% by auto
// roc 2009-06 006f02e0  unit: seg_006f0000  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f02e0
//
// 006f02e0  83ec18               sub esp, 0x18
// 006f02e3  53                   push ebx
// 006f02e4  56                   push esi
// 006f02e5  8bf0                 mov esi, eax
// 006f02e7  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006f02ea  56                   push esi
// 006f02eb  e8f0230000           call 0x6f26e0
// 006f02f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006f02f3  8d81fcfeffff         lea eax, [ecx - 0x104]
// 006f02f9  83c404               add esp, 4
// 006f02fc  83f81b               cmp eax, 0x1b
// 006f02ff  770e                 ja 0x6f030f
// 006f0301  0fb680e4036f00       movzx eax, byte ptr [eax + 0x6f03e4]
// 006f0308  ff2485dc036f00       jmp dword ptr [eax*4 + 0x6f03dc]
// 006f030f  83f93b               cmp ecx, 0x3b
// 006f0312  0f84ad000000         je 0x6f03c5
// 006f0318  57                   push edi
// 006f0319  8d7c240c             lea edi, [esp + 0xc]
// 006f031d  e8cee4ffff           call 0x6ee7f0
// 006f0322  8bf0                 mov esi, eax
// 006f0324  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f0328  5f                   pop edi
// 006f0329  83f80d               cmp eax, 0xd
// 006f032c  744c                 je 0x6f037a
// 006f032e  83f80e               cmp eax, 0xe
// 006f0331  7447                 je 0x6f037a
// 006f0333  83fe01               cmp esi, 1
// 006f0336  751f                 jne 0x6f0357
// 006f0338  8d4c2408             lea ecx, [esp + 8]
// 006f033c  51                   push ecx
// 006f033d  53                   push ebx
// 006f033e  e81da50000           call 0x6fa860
// 006f0343  83c408               add esp, 8
// 006f0346  56                   push esi
// 006f0347  50                   push eax
// 006f0348  53                   push ebx
// 006f0349  e852a00000           call 0x6fa3a0
// 006f034e  83c40c               add esp, 0xc
// 006f0351  5e                   pop esi
// 006f0352  5b                   pop ebx
// 006f0353  83c418               add esp, 0x18
// 006f0356  c3                   ret 
// 006f0357  8d542408             lea edx, [esp + 8]
// 006f035b  52                   push edx
// 006f035c  53                   push ebx
// 006f035d  e87ea40000           call 0x6fa7e0
// 006f0362  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 006f0366  83c408               add esp, 8
// 006f0369  56                   push esi
// 006f036a  50                   push eax
// 006f036b  53                   push ebx
// 006f036c  e82fa00000           call 0x6fa3a0
// 006f0371  83c40c               add esp, 0xc
// 006f0374  5e                   pop esi
// 006f0375  5b                   pop ebx
// 006f0376  83c418               add esp, 0x18
// 006f0379  c3                   ret 
// 006f037a  6aff                 push -1
// 006f037c  8d44240c             lea eax, [esp + 0xc]
// 006f0380  50                   push eax
// 006f0381  53                   push ebx
// 006f0382  e8599b0000           call 0x6f9ee0
// 006f0387  83c40c               add esp, 0xc
// 006f038a  837c24080d           cmp dword ptr [esp + 8], 0xd
// 006f038f  751c                 jne 0x6f03ad
// 006f0391  83fe01               cmp esi, 1
// 006f0394  7517                 jne 0x6f03ad
// 006f0396  8b0b                 mov ecx, dword ptr [ebx]
// 006f0398  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006f039b  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f039f  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 006f03a2  8d0482               lea eax, [edx + eax*4]
// 006f03a5  83e1dd               and ecx, 0xffffffdd
// 006f03a8  83c91d               or ecx, 0x1d
// 006f03ab  8908                 mov dword ptr [eax], ecx
// 006f03ad  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 006f03b1  83ceff               or esi, 0xffffffff
// 006f03b4  56                   push esi
// 006f03b5  50                   push eax
// 006f03b6  53                   push ebx
// 006f03b7  e8e49f0000           call 0x6fa3a0
// 006f03bc  83c40c               add esp, 0xc
// 006f03bf  5e                   pop esi
// 006f03c0  5b                   pop ebx
// 006f03c1  83c418               add esp, 0x18
// 006f03c4  c3                   ret 
// 006f03c5  33f6                 xor esi, esi
// 006f03c7  33c0                 xor eax, eax
// 006f03c9  56                   push esi
// 006f03ca  50                   push eax
// 006f03cb  53                   push ebx
// 006f03cc  e8cf9f0000           call 0x6fa3a0
// 006f03d1  83c40c               add esp, 0xc
// 006f03d4  5e                   pop esi
// 006f03d5  5b                   pop ebx
// 006f03d6  83c418               add esp, 0x18
// 006f03d9  c3                   ret 
// 006f03da  8bff                 mov edi, edi
// 006f03dc  c503                 lds eax, ptr [ebx]
// 006f03de  6f                   outsd dx, dword ptr [esi]
// 006f03df  000f                 add byte ptr [edi], cl
// 006f03e1  036f00               add ebp, dword ptr [edi]
// 006f03e4  0000                 add byte ptr [eax], al
// 006f03e6  0001                 add byte ptr [ecx], al
// 006f03e8  0101                 add dword ptr [ecx], eax
// 006f03ea  0101                 add dword ptr [ecx], eax
// 006f03ec  0101                 add dword ptr [ecx], eax
// 006f03ee  0101                 add dword ptr [ecx], eax
// 006f03f0  0101                 add dword ptr [ecx], eax
// 006f03f2  0101                 add dword ptr [ecx], eax
// 006f03f4  0001                 add byte ptr [ecx], al
// 006f03f6  0101                 add dword ptr [ecx], eax
// 006f03f8  0101                 add dword ptr [ecx], eax
// 006f03fa  0101                 add dword ptr [ecx], eax
// 006f03fc  0101                 add dword ptr [ecx], eax
// 006f03fe  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _retstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
