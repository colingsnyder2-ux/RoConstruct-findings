// from server: 100% by auto
// roc 2009-06 006ed740  unit: seg_006e0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed740
//
// 006ed740  8b442404             mov eax, dword ptr [esp + 4]
// 006ed744  6870dd8e00           push 0x8edd70
// 006ed749  50                   push eax
// 006ed74a  e8f1b0fdff           call 0x6c8840
// 006ed74f  83c408               add esp, 8
// 006ed752  33c0                 xor eax, eax
// 006ed754  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
