// from server: 100% by auto
// roc 2007-08 005bf650  unit: boost::detail::H::?$sp_counted_impl_p  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf650
//
// 005bf650  53                   push ebx
// 005bf651  55                   push ebp
// 005bf652  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005bf656  56                   push esi
// 005bf657  8b742418             mov esi, dword ptr [esp + 0x18]
// 005bf65b  85f6                 test esi, esi
// 005bf65d  57                   push edi
// 005bf65e  741b                 je 0x5bf67b
// 005bf660  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bf664  57                   push edi
// 005bf665  55                   push ebp
// 005bf666  e805e1ffff           call 0x5bd770
// 005bf66b  83c408               add esp, 8
// 005bf66e  85c0                 test eax, eax
// 005bf670  7f04                 jg 0x5bf676
// 005bf672  8bc6                 mov eax, esi
// 005bf674  eb15                 jmp 0x5bf68b
// 005bf676  6a00                 push 0
// 005bf678  57                   push edi
// 005bf679  eb07                 jmp 0x5bf682
// 005bf67b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005bf67f  6a00                 push 0
// 005bf681  50                   push eax
// 005bf682  55                   push ebp
// 005bf683  e8c8fcffff           call 0x5bf350
// 005bf688  83c40c               add esp, 0xc
// 005bf68b  8b742420             mov esi, dword ptr [esp + 0x20]
// 005bf68f  8b0e                 mov ecx, dword ptr [esi]
// 005bf691  33ff                 xor edi, edi
// 005bf693  85c9                 test ecx, ecx
// 005bf695  743d                 je 0x5bf6d4
// 005bf697  8bd0                 mov edx, eax
// 005bf699  8da42400000000       lea esp, [esp]
// 005bf6a0  8a19                 mov bl, byte ptr [ecx]
// 005bf6a2  3a1a                 cmp bl, byte ptr [edx]
// 005bf6a4  751a                 jne 0x5bf6c0
// 005bf6a6  84db                 test bl, bl
// 005bf6a8  7412                 je 0x5bf6bc
// 005bf6aa  8a5901               mov bl, byte ptr [ecx + 1]
// 005bf6ad  3a5a01               cmp bl, byte ptr [edx + 1]
// 005bf6b0  750e                 jne 0x5bf6c0
// 005bf6b2  83c102               add ecx, 2
// 005bf6b5  83c202               add edx, 2
// 005bf6b8  84db                 test bl, bl
// 005bf6ba  75e4                 jne 0x5bf6a0
// 005bf6bc  33c9                 xor ecx, ecx
// 005bf6be  eb05                 jmp 0x5bf6c5
// 005bf6c0  1bc9                 sbb ecx, ecx
// 005bf6c2  83d9ff               sbb ecx, -1
// 005bf6c5  85c9                 test ecx, ecx
// 005bf6c7  742b                 je 0x5bf6f4
// 005bf6c9  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 005bf6cd  83c701               add edi, 1
// 005bf6d0  85c9                 test ecx, ecx
// 005bf6d2  75c3                 jne 0x5bf697
// 005bf6d4  50                   push eax
// 005bf6d5  6880917b00           push 0x7b9180
// 005bf6da  55                   push ebp
// 005bf6db  e8b0e5ffff           call 0x5bdc90
// 005bf6e0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005bf6e4  50                   push eax
// 005bf6e5  51                   push ecx
// 005bf6e6  55                   push ebp
// 005bf6e7  e894faffff           call 0x5bf180
// 005bf6ec  83c418               add esp, 0x18
// 005bf6ef  5f                   pop edi
// 005bf6f0  5e                   pop esi
// 005bf6f1  5d                   pop ebp
// 005bf6f2  5b                   pop ebx
// 005bf6f3  c3                   ret 
// 005bf6f4  8bc7                 mov eax, edi
// 005bf6f6  5f                   pop edi
// 005bf6f7  5e                   pop esi
// 005bf6f8  5d                   pop ebp
// 005bf6f9  5b                   pop ebx
// 005bf6fa  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
