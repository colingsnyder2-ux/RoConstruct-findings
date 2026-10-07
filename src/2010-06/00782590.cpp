// roc 2010-06 00782590  unit: seg_00780000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782590
//
// 00782590  8b442404             mov eax, dword ptr [esp + 4]
// 00782594  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00782597  8b542408             mov edx, dword ptr [esp + 8]
// 0078259b  51                   push ecx
// 0078259c  52                   push edx
// 0078259d  50                   push eax
// 0078259e  e84dffffff           call 0x7824f0
// 007825a3  83c40c               add esp, 0xc
// 007825a6  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
