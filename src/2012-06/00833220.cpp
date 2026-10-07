// roc 2012-06 00833220  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833220
//
// 00833220  56                   push esi
// 00833221  8b742408             mov esi, dword ptr [esp + 8]
// 00833225  8b06                 mov eax, dword ptr [esi]
// 00833227  2bc6                 sub eax, esi
// 00833229  83e80c               sub eax, 0xc
// 0083322c  7418                 je 0x833246
// 0083322e  57                   push edi
// 0083322f  50                   push eax
// 00833230  8b4608               mov eax, dword ptr [esi + 8]
// 00833233  8d7e0c               lea edi, [esi + 0xc]
// 00833236  57                   push edi
// 00833237  50                   push eax
// 00833238  e8b3eeffff           call 0x8320f0
// 0083323d  83c40c               add esp, 0xc
// 00833240  ff4604               inc dword ptr [esi + 4]
// 00833243  893e                 mov dword ptr [esi], edi
// 00833245  5f                   pop edi
// 00833246  8b4e04               mov ecx, dword ptr [esi + 4]
// 00833249  8b5608               mov edx, dword ptr [esi + 8]
// 0083324c  51                   push ecx
// 0083324d  52                   push edx
// 0083324e  e86df8ffff           call 0x832ac0
// 00833253  83c408               add esp, 8
// 00833256  c7460401000000       mov dword ptr [esi + 4], 1
// 0083325d  5e                   pop esi
// 0083325e  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
