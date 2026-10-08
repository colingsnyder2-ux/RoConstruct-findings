// from server: 100% by auto
// roc 2011-06 007da6d0  unit: seg_007d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da6d0
//
// 007da6d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007da6d4  80790600             cmp byte ptr [ecx + 6], 0
// 007da6d8  0fb64107             movzx eax, byte ptr [ecx + 7]
// 007da6dc  7418                 je 0x7da6f6
// 007da6de  c1e004               shl eax, 4
// 007da6e1  83c018               add eax, 0x18
// 007da6e4  6a00                 push 0
// 007da6e6  50                   push eax
// 007da6e7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007da6eb  51                   push ecx
// 007da6ec  50                   push eax
// 007da6ed  e84e070000           call 0x7dae40
// 007da6f2  83c410               add esp, 0x10
// 007da6f5  c3                   ret 
// 007da6f6  8d048514000000       lea eax, [eax*4 + 0x14]
// 007da6fd  6a00                 push 0
// 007da6ff  50                   push eax
// 007da700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007da704  51                   push ecx
// 007da705  50                   push eax
// 007da706  e835070000           call 0x7dae40
// 007da70b  83c410               add esp, 0x10
// 007da70e  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
