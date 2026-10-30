// from server: 100% by auto
// roc 2007-08 005c7f70  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7f70
//
// 005c7f70  56                   push esi
// 005c7f71  57                   push edi
// 005c7f72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c7f76  6a02                 push 2
// 005c7f78  68efd8ffff           push 0xffffd8ef
// 005c7f7d  57                   push edi
// 005c7f7e  e81d5fffff           call 0x5bdea0
// 005c7f83  6aff                 push -1
// 005c7f85  57                   push edi
// 005c7f86  e8055bffff           call 0x5bda90
// 005c7f8b  8b30                 mov esi, dword ptr [eax]
// 005c7f8d  83c414               add esp, 0x14
// 005c7f90  85f6                 test esi, esi
// 005c7f92  7514                 jne 0x5c7fa8
// 005c7f94  a17c987b00           mov eax, dword ptr [0x7b987c]
// 005c7f99  50                   push eax
// 005c7f9a  6890997b00           push 0x7b9990
// 005c7f9f  57                   push edi
// 005c7fa0  e83b69ffff           call 0x5be8e0
// 005c7fa5  83c40c               add esp, 0xc
// 005c7fa8  56                   push esi
// 005c7fa9  b801000000           mov eax, 1
// 005c7fae  e8bdfeffff           call 0x5c7e70
// 005c7fb3  83c404               add esp, 4
// 005c7fb6  5f                   pop edi
// 005c7fb7  5e                   pop esi
// 005c7fb8  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_write)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
