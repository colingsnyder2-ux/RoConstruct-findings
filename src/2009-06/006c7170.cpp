// roc 2009-06 006c7170  unit: seg_006c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7170
//
// 006c7170  56                   push esi
// 006c7171  8b742408             mov esi, dword ptr [esp + 8]
// 006c7175  6a05                 push 5
// 006c7177  6a01                 push 1
// 006c7179  56                   push esi
// 006c717a  e8c13affff           call 0x6bac40
// 006c717f  68edd8ffff           push 0xffffd8ed
// 006c7184  56                   push esi
// 006c7185  e8b61dffff           call 0x6b8f40
// 006c718a  6a01                 push 1
// 006c718c  56                   push esi
// 006c718d  e8ae1dffff           call 0x6b8f40
// 006c7192  6a00                 push 0
// 006c7194  56                   push esi
// 006c7195  e8c621ffff           call 0x6b9360
// 006c719a  83c424               add esp, 0x24
// 006c719d  b803000000           mov eax, 3
// 006c71a2  5e                   pop esi
// 006c71a3  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
