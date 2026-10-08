// from server: 100% by auto
// roc 2009-06 006ecff0  unit: seg_006e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecff0
//
// 006ecff0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ecff4  80790600             cmp byte ptr [ecx + 6], 0
// 006ecff8  0fb64107             movzx eax, byte ptr [ecx + 7]
// 006ecffc  7418                 je 0x6ed016
// 006ecffe  c1e004               shl eax, 4
// 006ed001  83c018               add eax, 0x18
// 006ed004  6a00                 push 0
// 006ed006  50                   push eax
// 006ed007  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ed00b  51                   push ecx
// 006ed00c  50                   push eax
// 006ed00d  e84e070000           call 0x6ed760
// 006ed012  83c410               add esp, 0x10
// 006ed015  c3                   ret 
// 006ed016  8d048514000000       lea eax, [eax*4 + 0x14]
// 006ed01d  6a00                 push 0
// 006ed01f  50                   push eax
// 006ed020  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ed024  51                   push ecx
// 006ed025  50                   push eax
// 006ed026  e835070000           call 0x6ed760
// 006ed02b  83c410               add esp, 0x10
// 006ed02e  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
