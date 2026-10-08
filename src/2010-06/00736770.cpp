// from server: 100% by auto
// roc 2010-06 00736770  unit: seg_00730000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736770
//
// 00736770  8b442404             mov eax, dword ptr [esp + 4]
// 00736774  68e8e3a400           push 0xa4e3e8
// 00736779  50                   push eax
// 0073677a  e821bdfeff           call 0x7224a0
// 0073677f  83c408               add esp, 8
// 00736782  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
