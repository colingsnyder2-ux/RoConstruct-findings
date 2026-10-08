// from server: 100% by auto
// roc 2012-06 00937210  unit: seg_00930000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00937210
//
// 00937210  8b442404             mov eax, dword ptr [esp + 4]
// 00937214  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00937217  8b542408             mov edx, dword ptr [esp + 8]
// 0093721b  51                   push ecx
// 0093721c  52                   push edx
// 0093721d  50                   push eax
// 0093721e  e84dffffff           call 0x937170
// 00937223  83c40c               add esp, 0xc
// 00937226  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
