// from server: 100% by auto
// roc 2007-08 006175c0  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006175c0
//
// 006175c0  8b442404             mov eax, dword ptr [esp + 4]
// 006175c4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006175c7  8b542408             mov edx, dword ptr [esp + 8]
// 006175cb  51                   push ecx
// 006175cc  52                   push edx
// 006175cd  50                   push eax
// 006175ce  e84dffffff           call 0x617520
// 006175d3  83c40c               add esp, 0xc
// 006175d6  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
