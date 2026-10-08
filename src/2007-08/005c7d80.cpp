// from server: 100% by auto
// roc 2007-08 005c7d80  unit: lua_exception  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7d80
//
// 005c7d80  56                   push esi
// 005c7d81  8b742408             mov esi, dword ptr [esp + 8]
// 005c7d85  57                   push edi
// 005c7d86  6844997b00           push 0x7b9944
// 005c7d8b  6a01                 push 1
// 005c7d8d  56                   push esi
// 005c7d8e  e8ad74ffff           call 0x5bf240
// 005c7d93  8bf8                 mov edi, eax
// 005c7d95  83c40c               add esp, 0xc
// 005c7d98  833f00               cmp dword ptr [edi], 0
// 005c7d9b  750e                 jne 0x5c7dab
// 005c7d9d  684c997b00           push 0x7b994c
// 005c7da2  56                   push esi
// 005c7da3  e8386bffff           call 0x5be8e0
// 005c7da8  83c408               add esp, 8
// 005c7dab  8b07                 mov eax, dword ptr [edi]
// 005c7dad  6a02                 push 2
// 005c7daf  e8dcfdffff           call 0x5c7b90
// 005c7db4  83c404               add esp, 4
// 005c7db7  5f                   pop edi
// 005c7db8  5e                   pop esi
// 005c7db9  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
