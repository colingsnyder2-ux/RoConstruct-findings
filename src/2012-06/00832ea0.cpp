// from server: 100% by auto
// roc 2012-06 00832ea0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832ea0
//
// 00832ea0  56                   push esi
// 00832ea1  8b742408             mov esi, dword ptr [esp + 8]
// 00832ea5  6a01                 push 1
// 00832ea7  56                   push esi
// 00832ea8  e883ffffff           call 0x832e30
// 00832ead  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00832eb1  8d442418             lea eax, [esp + 0x18]
// 00832eb5  50                   push eax
// 00832eb6  51                   push ecx
// 00832eb7  56                   push esi
// 00832eb8  e8e3f2ffff           call 0x8321a0
// 00832ebd  6a02                 push 2
// 00832ebf  56                   push esi
// 00832ec0  e8fbfbffff           call 0x832ac0
// 00832ec5  56                   push esi
// 00832ec6  e8a5fbffff           call 0x832a70
// 00832ecb  83c420               add esp, 0x20
// 00832ece  5e                   pop esi
// 00832ecf  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
