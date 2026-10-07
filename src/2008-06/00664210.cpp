// roc 2008-06 00664210  unit: RBX::FilterStairs  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664210
//
// 00664210  8b442404             mov eax, dword ptr [esp + 4]
// 00664214  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00664217  8b542408             mov edx, dword ptr [esp + 8]
// 0066421b  51                   push ecx
// 0066421c  52                   push edx
// 0066421d  50                   push eax
// 0066421e  e84dffffff           call 0x664170
// 00664223  83c40c               add esp, 0xc
// 00664226  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_syntaxerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
