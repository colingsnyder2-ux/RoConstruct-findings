// from server: 100% by auto
// roc 2007-08 005cc590  unit: seg_005c0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc590
//
// 005cc590  56                   push esi
// 005cc591  8b742408             mov esi, dword ptr [esp + 8]
// 005cc595  57                   push edi
// 005cc596  56                   push esi
// 005cc597  e88422ffff           call 0x5be820
// 005cc59c  6a01                 push 1
// 005cc59e  56                   push esi
// 005cc59f  8bf8                 mov edi, eax
// 005cc5a1  e8ca11ffff           call 0x5bd770
// 005cc5a6  83c40c               add esp, 0xc
// 005cc5a9  83f806               cmp eax, 6
// 005cc5ac  750f                 jne 0x5cc5bd
// 005cc5ae  6a01                 push 1
// 005cc5b0  56                   push esi
// 005cc5b1  e8fa11ffff           call 0x5bd7b0
// 005cc5b6  83c408               add esp, 8
// 005cc5b9  85c0                 test eax, eax
// 005cc5bb  7410                 je 0x5cc5cd
// 005cc5bd  68e8a47b00           push 0x7ba4e8
// 005cc5c2  6a01                 push 1
// 005cc5c4  56                   push esi
// 005cc5c5  e8b62bffff           call 0x5bf180
// 005cc5ca  83c40c               add esp, 0xc
// 005cc5cd  6a01                 push 1
// 005cc5cf  56                   push esi
// 005cc5d0  e86b11ffff           call 0x5bd740
// 005cc5d5  6a01                 push 1
// 005cc5d7  57                   push edi
// 005cc5d8  56                   push esi
// 005cc5d9  e8320fffff           call 0x5bd510
// 005cc5de  83c414               add esp, 0x14
// 005cc5e1  5f                   pop edi
// 005cc5e2  b801000000           mov eax, 1
// 005cc5e7  5e                   pop esi
// 005cc5e8  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
