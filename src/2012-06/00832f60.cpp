// from server: 100% by auto
// roc 2012-06 00832f60  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832f60
//
// 00832f60  8b442408             mov eax, dword ptr [esp + 8]
// 00832f64  56                   push esi
// 00832f65  8b742408             mov esi, dword ptr [esp + 8]
// 00832f69  50                   push eax
// 00832f6a  56                   push esi
// 00832f6b  e810f5ffff           call 0x832480
// 00832f70  83c408               add esp, 8
// 00832f73  85c0                 test eax, eax
// 00832f75  742d                 je 0x832fa4
// 00832f77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00832f7b  51                   push ecx
// 00832f7c  56                   push esi
// 00832f7d  e8aef1ffff           call 0x832130
// 00832f82  6afe                 push -2
// 00832f84  56                   push esi
// 00832f85  e816f4ffff           call 0x8323a0
// 00832f8a  6aff                 push -1
// 00832f8c  56                   push esi
// 00832f8d  e84eedffff           call 0x831ce0
// 00832f92  83c418               add esp, 0x18
// 00832f95  85c0                 test eax, eax
// 00832f97  750f                 jne 0x832fa8
// 00832f99  6afd                 push -3
// 00832f9b  56                   push esi
// 00832f9c  e85febffff           call 0x831b00
// 00832fa1  83c408               add esp, 8
// 00832fa4  33c0                 xor eax, eax
// 00832fa6  5e                   pop esi
// 00832fa7  c3                   ret 
// 00832fa8  6afe                 push -2
// 00832faa  56                   push esi
// 00832fab  e8a0ebffff           call 0x831b50
// 00832fb0  83c408               add esp, 8
// 00832fb3  b801000000           mov eax, 1
// 00832fb8  5e                   pop esi
// 00832fb9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
