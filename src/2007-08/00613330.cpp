// from server: 100% by auto
// roc 2007-08 00613330  unit: seg_00610000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613330
//
// 00613330  56                   push esi
// 00613331  8b742408             mov esi, dword ptr [esp + 8]
// 00613335  833e00               cmp dword ptr [esi], 0
// 00613338  7547                 jne 0x613381
// 0061333a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0061333d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00613340  8d4c2408             lea ecx, [esp + 8]
// 00613344  51                   push ecx
// 00613345  52                   push edx
// 00613346  50                   push eax
// 00613347  8b4608               mov eax, dword ptr [esi + 8]
// 0061334a  ffd0                 call eax
// 0061334c  83c40c               add esp, 0xc
// 0061334f  85c0                 test eax, eax
// 00613351  741e                 je 0x613371
// 00613353  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00613357  85c9                 test ecx, ecx
// 00613359  7416                 je 0x613371
// 0061335b  83c1ff               add ecx, -1
// 0061335e  894604               mov dword ptr [esi + 4], eax
// 00613361  890e                 mov dword ptr [esi], ecx
// 00613363  0fb610               movzx edx, byte ptr [eax]
// 00613366  83c001               add eax, 1
// 00613369  83faff               cmp edx, -1
// 0061336c  894604               mov dword ptr [esi + 4], eax
// 0061336f  7505                 jne 0x613376
// 00613371  83c8ff               or eax, 0xffffffff
// 00613374  5e                   pop esi
// 00613375  c3                   ret 
// 00613376  83c101               add ecx, 1
// 00613379  83c0ff               add eax, -1
// 0061337c  890e                 mov dword ptr [esi], ecx
// 0061337e  894604               mov dword ptr [esi + 4], eax
// 00613381  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613384  0fb601               movzx eax, byte ptr [ecx]
// 00613387  5e                   pop esi
// 00613388  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
