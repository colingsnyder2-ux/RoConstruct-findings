// from server: 100% by auto
// roc 2008-06 0065f7a0  unit: seg_00650000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f7a0
//
// 0065f7a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065f7a4  80790600             cmp byte ptr [ecx + 6], 0
// 0065f7a8  0fb64107             movzx eax, byte ptr [ecx + 7]
// 0065f7ac  7418                 je 0x65f7c6
// 0065f7ae  c1e004               shl eax, 4
// 0065f7b1  83c018               add eax, 0x18
// 0065f7b4  6a00                 push 0
// 0065f7b6  50                   push eax
// 0065f7b7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f7bb  51                   push ecx
// 0065f7bc  50                   push eax
// 0065f7bd  e82e0f0000           call 0x6606f0
// 0065f7c2  83c410               add esp, 0x10
// 0065f7c5  c3                   ret 
// 0065f7c6  8d048514000000       lea eax, [eax*4 + 0x14]
// 0065f7cd  6a00                 push 0
// 0065f7cf  50                   push eax
// 0065f7d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f7d4  51                   push ecx
// 0065f7d5  50                   push eax
// 0065f7d6  e8150f0000           call 0x6606f0
// 0065f7db  83c410               add esp, 0x10
// 0065f7de  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
