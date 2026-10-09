// roc 2009-12 008ec570  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec570
//
// 008ec570  83ec10               sub esp, 0x10
// 008ec573  53                   push ebx
// 008ec574  8bd9                 mov ebx, ecx
// 008ec576  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 008ec57d  7518                 jne 0x8ec597
// 008ec57f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ec583  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ec587  50                   push eax
// 008ec588  51                   push ecx
// 008ec589  8bcb                 mov ecx, ebx
// 008ec58b  e890bff1ff           call 0x808520
// 008ec590  5b                   pop ebx
// 008ec591  83c410               add esp, 0x10
// 008ec594  c20800               ret 8
// 008ec597  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008ec59a  55                   push ebp
// 008ec59b  56                   push esi
// 008ec59c  57                   push edi
// 008ec59d  8d542410             lea edx, [esp + 0x10]
// 008ec5a1  52                   push edx
// 008ec5a2  50                   push eax
// 008ec5a3  ff1570cc9800         call dword ptr [0x98cc70]
// 008ec5a9  6afd                 push -3
// 008ec5ab  6afd                 push -3
// 008ec5ad  8d4c2418             lea ecx, [esp + 0x18]
// 008ec5b1  51                   push ecx
// 008ec5b2  ff1558ca9800         call dword ptr [0x98ca58]
// 008ec5b8  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 008ec5be  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008ec5c2  83ff04               cmp edi, 4
// 008ec5c5  0f8493000000         je 0x8ec65e
// 008ec5cb  83ff01               cmp edi, 1
// 008ec5ce  7515                 jne 0x8ec5e5
// 008ec5d0  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 008ec5d4  7f33                 jg 0x8ec609
// 008ec5d6  5f                   pop edi
// 008ec5d7  5e                   pop esi
// 008ec5d8  5d                   pop ebp
// 008ec5d9  b80c000000           mov eax, 0xc
// 008ec5de  5b                   pop ebx
// 008ec5df  83c410               add esp, 0x10
// 008ec5e2  c20800               ret 8
// 008ec5e5  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008ec5e9  7c1e                 jl 0x8ec609
// 008ec5eb  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008ec5f2  0f84da000000         je 0x8ec6d2
// 008ec5f8  57                   push edi
// 008ec5f9  e802b8b3ff           call 0x427e00
// 008ec5fe  83c404               add esp, 4
// 008ec601  85c0                 test eax, eax
// 008ec603  0f84c9000000         je 0x8ec6d2
// 008ec609  8b742424             mov esi, dword ptr [esp + 0x24]
// 008ec60d  83ff03               cmp edi, 3
// 008ec610  7519                 jne 0x8ec62b
// 008ec612  3b742410             cmp esi, dword ptr [esp + 0x10]
// 008ec616  0f8fd5000000         jg 0x8ec6f1
// 008ec61c  5f                   pop edi
// 008ec61d  5e                   pop esi
// 008ec61e  5d                   pop ebp
// 008ec61f  b80a000000           mov eax, 0xa
// 008ec624  5b                   pop ebx
// 008ec625  83c410               add esp, 0x10
// 008ec628  c20800               ret 8
// 008ec62b  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008ec62f  0f8cbc000000         jl 0x8ec6f1
// 008ec635  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008ec63c  7411                 je 0x8ec64f
// 008ec63e  57                   push edi
// 008ec63f  e8bcb7b3ff           call 0x427e00
// 008ec644  83c404               add esp, 4
// 008ec647  85c0                 test eax, eax
// 008ec649  0f84a2000000         je 0x8ec6f1
// 008ec64f  5f                   pop edi
// 008ec650  5e                   pop esi
// 008ec651  5d                   pop ebp
// 008ec652  b80b000000           mov eax, 0xb
// 008ec657  5b                   pop ebx
// 008ec658  83c410               add esp, 0x10
// 008ec65b  c20800               ret 8
// 008ec65e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ec662  3be8                 cmp ebp, eax
// 008ec664  8b742424             mov esi, dword ptr [esp + 0x24]
// 008ec668  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008ec66c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ec670  7d26                 jge 0x8ec698
// 008ec672  3bf2                 cmp esi, edx
// 008ec674  7d0f                 jge 0x8ec685
// 008ec676  5f                   pop edi
// 008ec677  5e                   pop esi
// 008ec678  5d                   pop ebp
// 008ec679  b80d000000           mov eax, 0xd
// 008ec67e  5b                   pop ebx
// 008ec67f  83c410               add esp, 0x10
// 008ec682  c20800               ret 8
// 008ec685  3bf7                 cmp esi, edi
// 008ec687  7c0f                 jl 0x8ec698
// 008ec689  5f                   pop edi
// 008ec68a  5e                   pop esi
// 008ec68b  5d                   pop ebp
// 008ec68c  b80e000000           mov eax, 0xe
// 008ec691  5b                   pop ebx
// 008ec692  83c410               add esp, 0x10
// 008ec695  c20800               ret 8
// 008ec698  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ec69c  3be9                 cmp ebp, ecx
// 008ec69e  7c26                 jl 0x8ec6c6
// 008ec6a0  3bf2                 cmp esi, edx
// 008ec6a2  7d0f                 jge 0x8ec6b3
// 008ec6a4  5f                   pop edi
// 008ec6a5  5e                   pop esi
// 008ec6a6  5d                   pop ebp
// 008ec6a7  b810000000           mov eax, 0x10
// 008ec6ac  5b                   pop ebx
// 008ec6ad  83c410               add esp, 0x10
// 008ec6b0  c20800               ret 8
// 008ec6b3  3bf7                 cmp esi, edi
// 008ec6b5  7c0f                 jl 0x8ec6c6
// 008ec6b7  5f                   pop edi
// 008ec6b8  5e                   pop esi
// 008ec6b9  5d                   pop ebp
// 008ec6ba  b811000000           mov eax, 0x11
// 008ec6bf  5b                   pop ebx
// 008ec6c0  83c410               add esp, 0x10
// 008ec6c3  c20800               ret 8
// 008ec6c6  3be8                 cmp ebp, eax
// 008ec6c8  0f8c08ffffff         jl 0x8ec5d6
// 008ec6ce  3be9                 cmp ebp, ecx
// 008ec6d0  7c0f                 jl 0x8ec6e1
// 008ec6d2  5f                   pop edi
// 008ec6d3  5e                   pop esi
// 008ec6d4  5d                   pop ebp
// 008ec6d5  b80f000000           mov eax, 0xf
// 008ec6da  5b                   pop ebx
// 008ec6db  83c410               add esp, 0x10
// 008ec6de  c20800               ret 8
// 008ec6e1  3bf2                 cmp esi, edx
// 008ec6e3  0f8c33ffffff         jl 0x8ec61c
// 008ec6e9  3bf7                 cmp esi, edi
// 008ec6eb  0f8d5effffff         jge 0x8ec64f
// 008ec6f1  55                   push ebp
// 008ec6f2  56                   push esi
// 008ec6f3  8bcb                 mov ecx, ebx
// 008ec6f5  e826bef1ff           call 0x808520
// 008ec6fa  5f                   pop edi
// 008ec6fb  5e                   pop esi
// 008ec6fc  5d                   pop ebp
// 008ec6fd  5b                   pop ebx
// 008ec6fe  83c410               add esp, 0x10
// 008ec701  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
