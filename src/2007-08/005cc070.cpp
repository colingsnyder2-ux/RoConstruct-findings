// roc 2007-08 005cc070  unit: seg_005c0000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc070
//
// 005cc070  53                   push ebx
// 005cc071  55                   push ebp
// 005cc072  56                   push esi
// 005cc073  57                   push edi
// 005cc074  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005cc078  6a05                 push 5
// 005cc07a  6a01                 push 1
// 005cc07c  57                   push edi
// 005cc07d  e84e32ffff           call 0x5bf2d0
// 005cc082  6a01                 push 1
// 005cc084  6a02                 push 2
// 005cc086  57                   push edi
// 005cc087  e87434ffff           call 0x5bf500
// 005cc08c  6a03                 push 3
// 005cc08e  57                   push edi
// 005cc08f  8bf0                 mov esi, eax
// 005cc091  e8da16ffff           call 0x5bd770
// 005cc096  83c420               add esp, 0x20
// 005cc099  85c0                 test eax, eax
// 005cc09b  7f0a                 jg 0x5cc0a7
// 005cc09d  6a01                 push 1
// 005cc09f  57                   push edi
// 005cc0a0  e84b19ffff           call 0x5bd9f0
// 005cc0a5  eb08                 jmp 0x5cc0af
// 005cc0a7  6a03                 push 3
// 005cc0a9  57                   push edi
// 005cc0aa  e8e133ffff           call 0x5bf490
// 005cc0af  8bd8                 mov ebx, eax
// 005cc0b1  8beb                 mov ebp, ebx
// 005cc0b3  2bee                 sub ebp, esi
// 005cc0b5  83c501               add ebp, 1
// 005cc0b8  83c408               add esp, 8
// 005cc0bb  85ed                 test ebp, ebp
// 005cc0bd  7f07                 jg 0x5cc0c6
// 005cc0bf  5f                   pop edi
// 005cc0c0  5e                   pop esi
// 005cc0c1  5d                   pop ebp
// 005cc0c2  33c0                 xor eax, eax
// 005cc0c4  5b                   pop ebx
// 005cc0c5  c3                   ret 
// 005cc0c6  6848a47b00           push 0x7ba448
// 005cc0cb  55                   push ebp
// 005cc0cc  57                   push edi
// 005cc0cd  e89e28ffff           call 0x5be970
// 005cc0d2  83c40c               add esp, 0xc
// 005cc0d5  3bf3                 cmp esi, ebx
// 005cc0d7  7f1a                 jg 0x5cc0f3
// 005cc0d9  8da42400000000       lea esp, [esp]
// 005cc0e0  56                   push esi
// 005cc0e1  6a01                 push 1
// 005cc0e3  57                   push edi
// 005cc0e4  e8b71dffff           call 0x5bdea0
// 005cc0e9  83c601               add esi, 1
// 005cc0ec  83c40c               add esp, 0xc
// 005cc0ef  3bf3                 cmp esi, ebx
// 005cc0f1  7eed                 jle 0x5cc0e0
// 005cc0f3  5f                   pop edi
// 005cc0f4  5e                   pop esi
// 005cc0f5  8bc5                 mov eax, ebp
// 005cc0f7  5d                   pop ebp
// 005cc0f8  5b                   pop ebx
// 005cc0f9  c3                   ret 
// library lua-5.1.3/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lbaselib.c
