// from server: 100% by auto
// roc 2008-06 006274f0  unit: seg_00620000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006274f0
//
// 006274f0  8b442404             mov eax, dword ptr [esp + 4]
// 006274f4  6820528400           push 0x845220
// 006274f9  50                   push eax
// 006274fa  e86197feff           call 0x610c60
// 006274ff  83c408               add esp, 8
// 00627502  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
