// roc 2007-08 006139d0  unit: seg_00610000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006139d0
//
// 006139d0  8b442404             mov eax, dword ptr [esp + 4]
// 006139d4  6828337c00           push 0x7c3328
// 006139d9  50                   push eax
// 006139da  e82136fbff           call 0x5c7000
// 006139df  83c408               add esp, 8
// 006139e2  33c0                 xor eax, eax
// 006139e4  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
