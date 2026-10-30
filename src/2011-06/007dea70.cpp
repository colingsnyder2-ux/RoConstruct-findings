// from server: 100% by auto
// roc 2011-06 007dea70  unit: seg_007d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dea70
//
// 007dea70  8b442404             mov eax, dword ptr [esp + 4]
// 007dea74  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007dea77  8b542408             mov edx, dword ptr [esp + 8]
// 007dea7b  51                   push ecx
// 007dea7c  52                   push edx
// 007dea7d  50                   push eax
// 007dea7e  e84dffffff           call 0x7de9d0
// 007dea83  83c40c               add esp, 0xc
// 007dea86  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
