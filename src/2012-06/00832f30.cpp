// from server: 100% by auto
// roc 2012-06 00832f30  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832f30
//
// 00832f30  8b442408             mov eax, dword ptr [esp + 8]
// 00832f34  56                   push esi
// 00832f35  8b742408             mov esi, dword ptr [esp + 8]
// 00832f39  50                   push eax
// 00832f3a  56                   push esi
// 00832f3b  e8b0eaffff           call 0x8319f0
// 00832f40  83c408               add esp, 8
// 00832f43  85c0                 test eax, eax
// 00832f45  7513                 jne 0x832f5a
// 00832f47  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00832f4b  51                   push ecx
// 00832f4c  68300abd00           push 0xbd0a30
// 00832f51  56                   push esi
// 00832f52  e849ffffff           call 0x832ea0
// 00832f57  83c40c               add esp, 0xc
// 00832f5a  5e                   pop esi
// 00832f5b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
