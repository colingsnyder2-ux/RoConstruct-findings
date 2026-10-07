// roc 2007-08 005c7fc0  unit: lua_exception  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7fc0
//
// 005c7fc0  56                   push esi
// 005c7fc1  57                   push edi
// 005c7fc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c7fc6  6844997b00           push 0x7b9944
// 005c7fcb  6a01                 push 1
// 005c7fcd  57                   push edi
// 005c7fce  e86d72ffff           call 0x5bf240
// 005c7fd3  8bf0                 mov esi, eax
// 005c7fd5  83c40c               add esp, 0xc
// 005c7fd8  833e00               cmp dword ptr [esi], 0
// 005c7fdb  750e                 jne 0x5c7feb
// 005c7fdd  684c997b00           push 0x7b994c
// 005c7fe2  57                   push edi
// 005c7fe3  e8f868ffff           call 0x5be8e0
// 005c7fe8  83c408               add esp, 8
// 005c7feb  8b36                 mov esi, dword ptr [esi]
// 005c7fed  56                   push esi
// 005c7fee  b802000000           mov eax, 2
// 005c7ff3  e878feffff           call 0x5c7e70
// 005c7ff8  83c404               add esp, 4
// 005c7ffb  5f                   pop edi
// 005c7ffc  5e                   pop esi
// 005c7ffd  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_write)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
