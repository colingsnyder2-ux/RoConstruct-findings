// from server: 100% by auto
// roc 2010-06 0077e9e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e9e0
//
// 0077e9e0  8b442404             mov eax, dword ptr [esp + 4]
// 0077e9e4  68f02fa500           push 0xa52ff0
// 0077e9e9  50                   push eax
// 0077e9ea  e8b151fbff           call 0x733ba0
// 0077e9ef  83c408               add esp, 8
// 0077e9f2  33c0                 xor eax, eax
// 0077e9f4  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
