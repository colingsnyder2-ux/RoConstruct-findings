// roc 2007-08 005c9b50  unit: seg_005c0000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9b50
//
// 005c9b50  51                   push ecx
// 005c9b51  55                   push ebp
// 005c9b52  56                   push esi
// 005c9b53  57                   push edi
// 005c9b54  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c9b58  8d44240c             lea eax, [esp + 0xc]
// 005c9b5c  50                   push eax
// 005c9b5d  6a01                 push 1
// 005c9b5f  57                   push edi
// 005c9b60  e8eb57ffff           call 0x5bf350
// 005c9b65  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c9b69  6a02                 push 2
// 005c9b6b  57                   push edi
// 005c9b6c  8be8                 mov ebp, eax
// 005c9b6e  e81d59ffff           call 0x5bf490
// 005c9b73  83c414               add esp, 0x14
// 005c9b76  85c0                 test eax, eax
// 005c9b78  7c04                 jl 0x5c9b7e
// 005c9b7a  8bf0                 mov esi, eax
// 005c9b7c  eb04                 jmp 0x5c9b82
// 005c9b7e  8d743001             lea esi, [eax + esi + 1]
// 005c9b82  53                   push ebx
// 005c9b83  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c9b87  6aff                 push -1
// 005c9b89  6a03                 push 3
// 005c9b8b  57                   push edi
// 005c9b8c  e86f59ffff           call 0x5bf500
// 005c9b91  83c40c               add esp, 0xc
// 005c9b94  85c0                 test eax, eax
// 005c9b96  7d04                 jge 0x5c9b9c
// 005c9b98  8d441801             lea eax, [eax + ebx + 1]
// 005c9b9c  83fe01               cmp esi, 1
// 005c9b9f  5b                   pop ebx
// 005c9ba0  7d05                 jge 0x5c9ba7
// 005c9ba2  be01000000           mov esi, 1
// 005c9ba7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9bab  3bc1                 cmp eax, ecx
// 005c9bad  7e02                 jle 0x5c9bb1
// 005c9baf  8bc1                 mov eax, ecx
// 005c9bb1  3bf0                 cmp esi, eax
// 005c9bb3  7f1e                 jg 0x5c9bd3
// 005c9bb5  2bc6                 sub eax, esi
// 005c9bb7  83c001               add eax, 1
// 005c9bba  50                   push eax
// 005c9bbb  8d4c2eff             lea ecx, [esi + ebp - 1]
// 005c9bbf  51                   push ecx
// 005c9bc0  57                   push edi
// 005c9bc1  e8ea3fffff           call 0x5bdbb0
// 005c9bc6  83c40c               add esp, 0xc
// 005c9bc9  5f                   pop edi
// 005c9bca  5e                   pop esi
// 005c9bcb  b801000000           mov eax, 1
// 005c9bd0  5d                   pop ebp
// 005c9bd1  59                   pop ecx
// 005c9bd2  c3                   ret 
// 005c9bd3  6a00                 push 0
// 005c9bd5  6854597800           push 0x785954
// 005c9bda  57                   push edi
// 005c9bdb  e8d03fffff           call 0x5bdbb0
// 005c9be0  83c40c               add esp, 0xc
// 005c9be3  5f                   pop edi
// 005c9be4  5e                   pop esi
// 005c9be5  b801000000           mov eax, 1
// 005c9bea  5d                   pop ebp
// 005c9beb  59                   pop ecx
// 005c9bec  c3                   ret 
// library lua-5.1.3/lstrlib.c (function _str_sub)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lstrlib.c
