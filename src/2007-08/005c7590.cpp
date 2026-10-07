// roc 2007-08 005c7590  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7590
//
// 005c7590  56                   push esi
// 005c7591  8b742408             mov esi, dword ptr [esp + 8]
// 005c7595  6a01                 push 1
// 005c7597  56                   push esi
// 005c7598  e8d361ffff           call 0x5bd770
// 005c759d  83c408               add esp, 8
// 005c75a0  83f8ff               cmp eax, -1
// 005c75a3  7510                 jne 0x5c75b5
// 005c75a5  6a02                 push 2
// 005c75a7  68efd8ffff           push 0xffffd8ef
// 005c75ac  56                   push esi
// 005c75ad  e8ee68ffff           call 0x5bdea0
// 005c75b2  83c40c               add esp, 0xc
// 005c75b5  6844997b00           push 0x7b9944
// 005c75ba  6a01                 push 1
// 005c75bc  56                   push esi
// 005c75bd  e87e7cffff           call 0x5bf240
// 005c75c2  83c40c               add esp, 0xc
// 005c75c5  833800               cmp dword ptr [eax], 0
// 005c75c8  750e                 jne 0x5c75d8
// 005c75ca  684c997b00           push 0x7b994c
// 005c75cf  56                   push esi
// 005c75d0  e80b73ffff           call 0x5be8e0
// 005c75d5  83c408               add esp, 8
// 005c75d8  6a01                 push 1
// 005c75da  56                   push esi
// 005c75db  e8a069ffff           call 0x5bdf80
// 005c75e0  686c997b00           push 0x7b996c
// 005c75e5  6aff                 push -1
// 005c75e7  56                   push esi
// 005c75e8  e81368ffff           call 0x5bde00
// 005c75ed  83c414               add esp, 0x14
// 005c75f0  56                   push esi
// 005c75f1  6aff                 push -1
// 005c75f3  56                   push esi
// 005c75f4  e86764ffff           call 0x5bda60
// 005c75f9  83c408               add esp, 8
// 005c75fc  ffd0                 call eax
// 005c75fe  83c404               add esp, 4
// 005c7601  5e                   pop esi
// 005c7602  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
