// from server: 100% by auto
// roc 2012-06 009367f0  unit: seg_00930000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009367f0
//
// 009367f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009367f4  80790600             cmp byte ptr [ecx + 6], 0
// 009367f8  0fb64107             movzx eax, byte ptr [ecx + 7]
// 009367fc  7418                 je 0x936816
// 009367fe  c1e004               shl eax, 4
// 00936801  83c018               add eax, 0x18
// 00936804  6a00                 push 0
// 00936806  50                   push eax
// 00936807  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093680b  51                   push ecx
// 0093680c  50                   push eax
// 0093680d  e84e070000           call 0x936f60
// 00936812  83c410               add esp, 0x10
// 00936815  c3                   ret 
// 00936816  8d048514000000       lea eax, [eax*4 + 0x14]
// 0093681d  6a00                 push 0
// 0093681f  50                   push eax
// 00936820  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936824  51                   push ecx
// 00936825  50                   push eax
// 00936826  e835070000           call 0x936f60
// 0093682b  83c410               add esp, 0x10
// 0093682e  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
