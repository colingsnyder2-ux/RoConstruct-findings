// from server: 100% by auto
// roc 2008-06 0065f870  unit: seg_00650000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f870
//
// 0065f870  56                   push esi
// 0065f871  8b742408             mov esi, dword ptr [esp + 8]
// 0065f875  833e00               cmp dword ptr [esi], 0
// 0065f878  753f                 jne 0x65f8b9
// 0065f87a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0065f87d  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065f880  8d4c2408             lea ecx, [esp + 8]
// 0065f884  51                   push ecx
// 0065f885  52                   push edx
// 0065f886  50                   push eax
// 0065f887  8b4608               mov eax, dword ptr [esi + 8]
// 0065f88a  ffd0                 call eax
// 0065f88c  83c40c               add esp, 0xc
// 0065f88f  85c0                 test eax, eax
// 0065f891  741a                 je 0x65f8ad
// 0065f893  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065f897  85c9                 test ecx, ecx
// 0065f899  7412                 je 0x65f8ad
// 0065f89b  49                   dec ecx
// 0065f89c  894604               mov dword ptr [esi + 4], eax
// 0065f89f  890e                 mov dword ptr [esi], ecx
// 0065f8a1  0fb610               movzx edx, byte ptr [eax]
// 0065f8a4  40                   inc eax
// 0065f8a5  894604               mov dword ptr [esi + 4], eax
// 0065f8a8  83faff               cmp edx, -1
// 0065f8ab  7505                 jne 0x65f8b2
// 0065f8ad  83c8ff               or eax, 0xffffffff
// 0065f8b0  5e                   pop esi
// 0065f8b1  c3                   ret 
// 0065f8b2  41                   inc ecx
// 0065f8b3  48                   dec eax
// 0065f8b4  890e                 mov dword ptr [esi], ecx
// 0065f8b6  894604               mov dword ptr [esi + 4], eax
// 0065f8b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065f8bc  0fb601               movzx eax, byte ptr [ecx]
// 0065f8bf  5e                   pop esi
// 0065f8c0  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
