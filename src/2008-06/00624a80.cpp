// from server: 100% by auto
// roc 2008-06 00624a80  unit: lua_exception  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624a80
//
// 00624a80  56                   push esi
// 00624a81  8b742408             mov esi, dword ptr [esp + 8]
// 00624a85  57                   push edi
// 00624a86  68dc4b8400           push 0x844bdc
// 00624a8b  6a01                 push 1
// 00624a8d  56                   push esi
// 00624a8e  e81dcbfeff           call 0x6115b0
// 00624a93  8bf8                 mov edi, eax
// 00624a95  83c40c               add esp, 0xc
// 00624a98  833f00               cmp dword ptr [edi], 0
// 00624a9b  750e                 jne 0x624aab
// 00624a9d  68e44b8400           push 0x844be4
// 00624aa2  56                   push esi
// 00624aa3  e8b8c1feff           call 0x610c60
// 00624aa8  83c408               add esp, 8
// 00624aab  8b07                 mov eax, dword ptr [edi]
// 00624aad  6a02                 push 2
// 00624aaf  e8dcfdffff           call 0x624890
// 00624ab4  83c404               add esp, 4
// 00624ab7  5f                   pop edi
// 00624ab8  5e                   pop esi
// 00624ab9  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
