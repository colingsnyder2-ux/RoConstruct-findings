// roc 2007-08 00613260  unit: seg_00610000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613260
//
// 00613260  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00613264  80790600             cmp byte ptr [ecx + 6], 0
// 00613268  0fb64107             movzx eax, byte ptr [ecx + 7]
// 0061326c  7418                 je 0x613286
// 0061326e  c1e004               shl eax, 4
// 00613271  83c018               add eax, 0x18
// 00613274  6a00                 push 0
// 00613276  50                   push eax
// 00613277  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061327b  51                   push ecx
// 0061327c  50                   push eax
// 0061327d  e86e070000           call 0x6139f0
// 00613282  83c410               add esp, 0x10
// 00613285  c3                   ret 
// 00613286  8d048514000000       lea eax, [eax*4 + 0x14]
// 0061328d  6a00                 push 0
// 0061328f  50                   push eax
// 00613290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00613294  51                   push ecx
// 00613295  50                   push eax
// 00613296  e855070000           call 0x6139f0
// 0061329b  83c410               add esp, 0x10
// 0061329e  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
