// from server: 100% by auto
// roc 2007-08 005c8450  unit: lua_exception  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8450
//
// 005c8450  56                   push esi
// 005c8451  8b742408             mov esi, dword ptr [esp + 8]
// 005c8455  6844997b00           push 0x7b9944
// 005c845a  6a01                 push 1
// 005c845c  56                   push esi
// 005c845d  e8de6dffff           call 0x5bf240
// 005c8462  83c40c               add esp, 0xc
// 005c8465  833800               cmp dword ptr [eax], 0
// 005c8468  750e                 jne 0x5c8478
// 005c846a  684c997b00           push 0x7b994c
// 005c846f  56                   push esi
// 005c8470  e86b64ffff           call 0x5be8e0
// 005c8475  83c408               add esp, 8
// 005c8478  6a01                 push 1
// 005c847a  56                   push esi
// 005c847b  e8c052ffff           call 0x5bd740
// 005c8480  6a00                 push 0
// 005c8482  56                   push esi
// 005c8483  e8d858ffff           call 0x5bdd60
// 005c8488  6a02                 push 2
// 005c848a  68c07d5c00           push 0x5c7dc0
// 005c848f  56                   push esi
// 005c8490  e82b58ffff           call 0x5bdcc0
// 005c8495  83c41c               add esp, 0x1c
// 005c8498  b801000000           mov eax, 1
// 005c849d  5e                   pop esi
// 005c849e  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_lines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
