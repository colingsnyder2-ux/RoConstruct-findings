// from server: 100% by auto
// roc 2009-06 006ed0c0  unit: seg_006e0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed0c0
//
// 006ed0c0  56                   push esi
// 006ed0c1  8b742408             mov esi, dword ptr [esp + 8]
// 006ed0c5  833e00               cmp dword ptr [esi], 0
// 006ed0c8  753f                 jne 0x6ed109
// 006ed0ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ed0cd  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ed0d0  8d4c2408             lea ecx, [esp + 8]
// 006ed0d4  51                   push ecx
// 006ed0d5  52                   push edx
// 006ed0d6  50                   push eax
// 006ed0d7  8b4608               mov eax, dword ptr [esi + 8]
// 006ed0da  ffd0                 call eax
// 006ed0dc  83c40c               add esp, 0xc
// 006ed0df  85c0                 test eax, eax
// 006ed0e1  741a                 je 0x6ed0fd
// 006ed0e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ed0e7  85c9                 test ecx, ecx
// 006ed0e9  7412                 je 0x6ed0fd
// 006ed0eb  49                   dec ecx
// 006ed0ec  894604               mov dword ptr [esi + 4], eax
// 006ed0ef  890e                 mov dword ptr [esi], ecx
// 006ed0f1  0fb610               movzx edx, byte ptr [eax]
// 006ed0f4  40                   inc eax
// 006ed0f5  894604               mov dword ptr [esi + 4], eax
// 006ed0f8  83faff               cmp edx, -1
// 006ed0fb  7505                 jne 0x6ed102
// 006ed0fd  83c8ff               or eax, 0xffffffff
// 006ed100  5e                   pop esi
// 006ed101  c3                   ret 
// 006ed102  41                   inc ecx
// 006ed103  48                   dec eax
// 006ed104  890e                 mov dword ptr [esi], ecx
// 006ed106  894604               mov dword ptr [esi + 4], eax
// 006ed109  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed10c  0fb601               movzx eax, byte ptr [ecx]
// 006ed10f  5e                   pop esi
// 006ed110  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
