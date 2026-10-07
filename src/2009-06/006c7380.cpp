// roc 2009-06 006c7380  unit: seg_006c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7380
//
// 006c7380  56                   push esi
// 006c7381  8b742408             mov esi, dword ptr [esp + 8]
// 006c7385  6a01                 push 1
// 006c7387  56                   push esi
// 006c7388  e80339ffff           call 0x6bac90
// 006c738d  6a01                 push 1
// 006c738f  56                   push esi
// 006c7390  e8bb1dffff           call 0x6b9150
// 006c7395  83c410               add esp, 0x10
// 006c7398  85c0                 test eax, eax
// 006c739a  751f                 jne 0x6c73bb
// 006c739c  50                   push eax
// 006c739d  6838c18e00           push 0x8ec138
// 006c73a2  6a02                 push 2
// 006c73a4  56                   push esi
// 006c73a5  e87639ffff           call 0x6bad20
// 006c73aa  50                   push eax
// 006c73ab  68400b8b00           push 0x8b0b40
// 006c73b0  56                   push esi
// 006c73b1  e88a2effff           call 0x6ba240
// 006c73b6  83c41c               add esp, 0x1c
// 006c73b9  5e                   pop esi
// 006c73ba  c3                   ret 
// 006c73bb  56                   push esi
// 006c73bc  e8bf19ffff           call 0x6b8d80
// 006c73c1  83c404               add esp, 4
// 006c73c4  5e                   pop esi
// 006c73c5  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
