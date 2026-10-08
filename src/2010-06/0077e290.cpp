// from server: 100% by auto
// roc 2010-06 0077e290  unit: seg_00770000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e290
//
// 0077e290  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077e294  80790600             cmp byte ptr [ecx + 6], 0
// 0077e298  0fb64107             movzx eax, byte ptr [ecx + 7]
// 0077e29c  7418                 je 0x77e2b6
// 0077e29e  c1e004               shl eax, 4
// 0077e2a1  83c018               add eax, 0x18
// 0077e2a4  6a00                 push 0
// 0077e2a6  50                   push eax
// 0077e2a7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077e2ab  51                   push ecx
// 0077e2ac  50                   push eax
// 0077e2ad  e84e070000           call 0x77ea00
// 0077e2b2  83c410               add esp, 0x10
// 0077e2b5  c3                   ret 
// 0077e2b6  8d048514000000       lea eax, [eax*4 + 0x14]
// 0077e2bd  6a00                 push 0
// 0077e2bf  50                   push eax
// 0077e2c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077e2c4  51                   push ecx
// 0077e2c5  50                   push eax
// 0077e2c6  e835070000           call 0x77ea00
// 0077e2cb  83c410               add esp, 0x10
// 0077e2ce  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
