// from server: 100% by auto
// roc 2009-06 006f12f0  unit: seg_006f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f12f0
//
// 006f12f0  8b442404             mov eax, dword ptr [esp + 4]
// 006f12f4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006f12f7  8b542408             mov edx, dword ptr [esp + 8]
// 006f12fb  51                   push ecx
// 006f12fc  52                   push edx
// 006f12fd  50                   push eax
// 006f12fe  e84dffffff           call 0x6f1250
// 006f1303  83c40c               add esp, 0xc
// 006f1306  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
