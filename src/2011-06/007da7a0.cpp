// from server: 100% by auto
// roc 2011-06 007da7a0  unit: seg_007d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da7a0
//
// 007da7a0  56                   push esi
// 007da7a1  8b742408             mov esi, dword ptr [esp + 8]
// 007da7a5  833e00               cmp dword ptr [esi], 0
// 007da7a8  753f                 jne 0x7da7e9
// 007da7aa  8b560c               mov edx, dword ptr [esi + 0xc]
// 007da7ad  8b4610               mov eax, dword ptr [esi + 0x10]
// 007da7b0  8d4c2408             lea ecx, [esp + 8]
// 007da7b4  51                   push ecx
// 007da7b5  52                   push edx
// 007da7b6  50                   push eax
// 007da7b7  8b4608               mov eax, dword ptr [esi + 8]
// 007da7ba  ffd0                 call eax
// 007da7bc  83c40c               add esp, 0xc
// 007da7bf  85c0                 test eax, eax
// 007da7c1  741a                 je 0x7da7dd
// 007da7c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007da7c7  85c9                 test ecx, ecx
// 007da7c9  7412                 je 0x7da7dd
// 007da7cb  49                   dec ecx
// 007da7cc  894604               mov dword ptr [esi + 4], eax
// 007da7cf  890e                 mov dword ptr [esi], ecx
// 007da7d1  0fb610               movzx edx, byte ptr [eax]
// 007da7d4  40                   inc eax
// 007da7d5  894604               mov dword ptr [esi + 4], eax
// 007da7d8  83faff               cmp edx, -1
// 007da7db  7505                 jne 0x7da7e2
// 007da7dd  83c8ff               or eax, 0xffffffff
// 007da7e0  5e                   pop esi
// 007da7e1  c3                   ret 
// 007da7e2  41                   inc ecx
// 007da7e3  48                   dec eax
// 007da7e4  890e                 mov dword ptr [esi], ecx
// 007da7e6  894604               mov dword ptr [esi + 4], eax
// 007da7e9  8b4e04               mov ecx, dword ptr [esi + 4]
// 007da7ec  0fb601               movzx eax, byte ptr [ecx]
// 007da7ef  5e                   pop esi
// 007da7f0  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
