// roc 2009-06 006c72d0  unit: seg_006c0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c72d0
//
// 006c72d0  56                   push esi
// 006c72d1  8b742408             mov esi, dword ptr [esp + 8]
// 006c72d5  57                   push edi
// 006c72d6  6a00                 push 0
// 006c72d8  6830c18e00           push 0x8ec130
// 006c72dd  6a02                 push 2
// 006c72df  56                   push esi
// 006c72e0  e83b3affff           call 0x6bad20
// 006c72e5  6a06                 push 6
// 006c72e7  6a01                 push 1
// 006c72e9  56                   push esi
// 006c72ea  8bf8                 mov edi, eax
// 006c72ec  e84f39ffff           call 0x6bac40
// 006c72f1  6a03                 push 3
// 006c72f3  56                   push esi
// 006c72f4  e8971affff           call 0x6b8d90
// 006c72f9  57                   push edi
// 006c72fa  6a00                 push 0
// 006c72fc  6850726c00           push 0x6c7250
// 006c7301  56                   push esi
// 006c7302  e86928ffff           call 0x6b9b70
// 006c7307  83c434               add esp, 0x34
// 006c730a  85c0                 test eax, eax
// 006c730c  7508                 jne 0x6c7316
// 006c730e  5f                   pop edi
// 006c730f  b801000000           mov eax, 1
// 006c7314  5e                   pop esi
// 006c7315  c3                   ret 
// 006c7316  56                   push esi
// 006c7317  e80420ffff           call 0x6b9320
// 006c731c  6afe                 push -2
// 006c731e  56                   push esi
// 006c731f  e80c1bffff           call 0x6b8e30
// 006c7324  83c40c               add esp, 0xc
// 006c7327  5f                   pop edi
// 006c7328  b802000000           mov eax, 2
// 006c732d  5e                   pop esi
// 006c732e  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
