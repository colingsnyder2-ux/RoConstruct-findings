// from server: 100% by auto
// roc 2009-06 006c5210  unit: lua_exception  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5210
//
// 006c5210  83ec08               sub esp, 8
// 006c5213  53                   push ebx
// 006c5214  55                   push ebp
// 006c5215  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c5219  56                   push esi
// 006c521a  8d44240c             lea eax, [esp + 0xc]
// 006c521e  50                   push eax
// 006c521f  6a01                 push 1
// 006c5221  55                   push ebp
// 006c5222  e8995affff           call 0x6bacc0
// 006c5227  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c522b  6a01                 push 1
// 006c522d  6a02                 push 2
// 006c522f  55                   push ebp
// 006c5230  89442428             mov dword ptr [esp + 0x28], eax
// 006c5234  e8375cffff           call 0x6bae70
// 006c5239  83c418               add esp, 0x18
// 006c523c  85c0                 test eax, eax
// 006c523e  7d04                 jge 0x6c5244
// 006c5240  8d443001             lea eax, [eax + esi + 1]
// 006c5244  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c5248  33db                 xor ebx, ebx
// 006c524a  85c0                 test eax, eax
// 006c524c  0f9cc3               setl bl
// 006c524f  4b                   dec ebx
// 006c5250  23d8                 and ebx, eax
// 006c5252  53                   push ebx
// 006c5253  6a03                 push 3
// 006c5255  55                   push ebp
// 006c5256  e8155cffff           call 0x6bae70
// 006c525b  83c40c               add esp, 0xc
// 006c525e  85c0                 test eax, eax
// 006c5260  7d04                 jge 0x6c5266
// 006c5262  8d443001             lea eax, [eax + esi + 1]
// 006c5266  33c9                 xor ecx, ecx
// 006c5268  85c0                 test eax, eax
// 006c526a  0f9cc1               setl cl
// 006c526d  49                   dec ecx
// 006c526e  23c1                 and eax, ecx
// 006c5270  85db                 test ebx, ebx
// 006c5272  7f05                 jg 0x6c5279
// 006c5274  bb01000000           mov ebx, 1
// 006c5279  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c527d  3bc1                 cmp eax, ecx
// 006c527f  7602                 jbe 0x6c5283
// 006c5281  8bc1                 mov eax, ecx
// 006c5283  3bd8                 cmp ebx, eax
// 006c5285  7e09                 jle 0x6c5290
// 006c5287  5e                   pop esi
// 006c5288  5d                   pop ebp
// 006c5289  33c0                 xor eax, eax
// 006c528b  5b                   pop ebx
// 006c528c  83c408               add esp, 8
// 006c528f  c3                   ret 
// 006c5290  8bf0                 mov esi, eax
// 006c5292  2bf3                 sub esi, ebx
// 006c5294  46                   inc esi
// 006c5295  8d141e               lea edx, [esi + ebx]
// 006c5298  3bd0                 cmp edx, eax
// 006c529a  7f0e                 jg 0x6c52aa
// 006c529c  6840bb8e00           push 0x8ebb40
// 006c52a1  55                   push ebp
// 006c52a2  e8994fffff           call 0x6ba240
// 006c52a7  83c408               add esp, 8
// 006c52aa  57                   push edi
// 006c52ab  6840bb8e00           push 0x8ebb40
// 006c52b0  56                   push esi
// 006c52b1  55                   push ebp
// 006c52b2  e81950ffff           call 0x6ba2d0
// 006c52b7  83c40c               add esp, 0xc
// 006c52ba  33ff                 xor edi, edi
// 006c52bc  85f6                 test esi, esi
// 006c52be  7e1b                 jle 0x6c52db
// 006c52c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c52c4  8d5c03ff             lea ebx, [ebx + eax - 1]
// 006c52c8  0fb60c3b             movzx ecx, byte ptr [ebx + edi]
// 006c52cc  51                   push ecx
// 006c52cd  55                   push ebp
// 006c52ce  e88d40ffff           call 0x6b9360
// 006c52d3  47                   inc edi
// 006c52d4  83c408               add esp, 8
// 006c52d7  3bfe                 cmp edi, esi
// 006c52d9  7ced                 jl 0x6c52c8
// 006c52db  5f                   pop edi
// 006c52dc  8bc6                 mov eax, esi
// 006c52de  5e                   pop esi
// 006c52df  5d                   pop ebp
// 006c52e0  5b                   pop ebx
// 006c52e1  83c408               add esp, 8
// 006c52e4  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
