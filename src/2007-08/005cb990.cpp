// from server: 100% by auto
// roc 2007-08 005cb990  unit: seg_005c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb990
//
// 005cb990  56                   push esi
// 005cb991  8b742408             mov esi, dword ptr [esp + 8]
// 005cb995  57                   push edi
// 005cb996  6a02                 push 2
// 005cb998  56                   push esi
// 005cb999  e8d21dffff           call 0x5bd770
// 005cb99e  6a05                 push 5
// 005cb9a0  6a01                 push 1
// 005cb9a2  56                   push esi
// 005cb9a3  8bf8                 mov edi, eax
// 005cb9a5  e82639ffff           call 0x5bf2d0
// 005cb9aa  83c414               add esp, 0x14
// 005cb9ad  85ff                 test edi, edi
// 005cb9af  7415                 je 0x5cb9c6
// 005cb9b1  83ff05               cmp edi, 5
// 005cb9b4  7410                 je 0x5cb9c6
// 005cb9b6  68cca27b00           push 0x7ba2cc
// 005cb9bb  6a02                 push 2
// 005cb9bd  56                   push esi
// 005cb9be  e8bd37ffff           call 0x5bf180
// 005cb9c3  83c40c               add esp, 0xc
// 005cb9c6  689ca27b00           push 0x7ba29c
// 005cb9cb  6a01                 push 1
// 005cb9cd  56                   push esi
// 005cb9ce  e8cd2fffff           call 0x5be9a0
// 005cb9d3  83c40c               add esp, 0xc
// 005cb9d6  85c0                 test eax, eax
// 005cb9d8  740e                 je 0x5cb9e8
// 005cb9da  68a8a27b00           push 0x7ba2a8
// 005cb9df  56                   push esi
// 005cb9e0  e8fb2effff           call 0x5be8e0
// 005cb9e5  83c408               add esp, 8
// 005cb9e8  6a02                 push 2
// 005cb9ea  56                   push esi
// 005cb9eb  e8a01bffff           call 0x5bd590
// 005cb9f0  6a01                 push 1
// 005cb9f2  56                   push esi
// 005cb9f3  e86827ffff           call 0x5be160
// 005cb9f8  83c410               add esp, 0x10
// 005cb9fb  5f                   pop edi
// 005cb9fc  b801000000           mov eax, 1
// 005cba01  5e                   pop esi
// 005cba02  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
