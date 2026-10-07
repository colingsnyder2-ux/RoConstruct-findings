// roc 2007-08 005cc320  unit: seg_005c0000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc320
//
// 005cc320  56                   push esi
// 005cc321  8b742408             mov esi, dword ptr [esp + 8]
// 005cc325  6a01                 push 1
// 005cc327  56                   push esi
// 005cc328  e86312ffff           call 0x5bd590
// 005cc32d  6a00                 push 0
// 005cc32f  56                   push esi
// 005cc330  e87b22ffff           call 0x5be5b0
// 005cc335  6a01                 push 1
// 005cc337  56                   push esi
// 005cc338  e81316ffff           call 0x5bd950
// 005cc33d  83c418               add esp, 0x18
// 005cc340  85c0                 test eax, eax
// 005cc342  0f84a5000000         je 0x5cc3ed
// 005cc348  6a01                 push 1
// 005cc34a  56                   push esi
// 005cc34b  e82014ffff           call 0x5bd770
// 005cc350  83c408               add esp, 8
// 005cc353  83f801               cmp eax, 1
// 005cc356  753a                 jne 0x5cc392
// 005cc358  6a00                 push 0
// 005cc35a  6a00                 push 0
// 005cc35c  56                   push esi
// 005cc35d  e87e1bffff           call 0x5bdee0
// 005cc362  6aff                 push -1
// 005cc364  56                   push esi
// 005cc365  e8d613ffff           call 0x5bd740
// 005cc36a  6a01                 push 1
// 005cc36c  56                   push esi
// 005cc36d  e8ee19ffff           call 0x5bdd60
// 005cc372  68edd8ffff           push 0xffffd8ed
// 005cc377  56                   push esi
// 005cc378  e8031dffff           call 0x5be080
// 005cc37d  83c424               add esp, 0x24
// 005cc380  6a02                 push 2
// 005cc382  56                   push esi
// 005cc383  e8d81dffff           call 0x5be160
// 005cc388  83c408               add esp, 8
// 005cc38b  b801000000           mov eax, 1
// 005cc390  5e                   pop esi
// 005cc391  c3                   ret 
// 005cc392  6a01                 push 1
// 005cc394  56                   push esi
// 005cc395  e8861bffff           call 0x5bdf20
// 005cc39a  83c408               add esp, 8
// 005cc39d  85c0                 test eax, eax
// 005cc39f  7426                 je 0x5cc3c7
// 005cc3a1  57                   push edi
// 005cc3a2  68edd8ffff           push 0xffffd8ed
// 005cc3a7  56                   push esi
// 005cc3a8  e8b31affff           call 0x5bde60
// 005cc3ad  6aff                 push -1
// 005cc3af  56                   push esi
// 005cc3b0  e89b15ffff           call 0x5bd950
// 005cc3b5  6afe                 push -2
// 005cc3b7  56                   push esi
// 005cc3b8  8bf8                 mov edi, eax
// 005cc3ba  e8d111ffff           call 0x5bd590
// 005cc3bf  83c418               add esp, 0x18
// 005cc3c2  85ff                 test edi, edi
// 005cc3c4  5f                   pop edi
// 005cc3c5  7510                 jne 0x5cc3d7
// 005cc3c7  687ca47b00           push 0x7ba47c
// 005cc3cc  6a01                 push 1
// 005cc3ce  56                   push esi
// 005cc3cf  e8ac2dffff           call 0x5bf180
// 005cc3d4  83c40c               add esp, 0xc
// 005cc3d7  6a01                 push 1
// 005cc3d9  56                   push esi
// 005cc3da  e8411bffff           call 0x5bdf20
// 005cc3df  83c408               add esp, 8
// 005cc3e2  6a02                 push 2
// 005cc3e4  56                   push esi
// 005cc3e5  e8761dffff           call 0x5be160
// 005cc3ea  83c408               add esp, 8
// 005cc3ed  b801000000           mov eax, 1
// 005cc3f2  5e                   pop esi
// 005cc3f3  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_newproxy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
