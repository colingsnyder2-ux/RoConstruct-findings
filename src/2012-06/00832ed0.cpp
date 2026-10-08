// from server: 100% by auto
// roc 2012-06 00832ed0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832ed0
//
// 00832ed0  56                   push esi
// 00832ed1  8b742408             mov esi, dword ptr [esp + 8]
// 00832ed5  57                   push edi
// 00832ed6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00832eda  57                   push edi
// 00832edb  68f0d8ffff           push 0xffffd8f0
// 00832ee0  56                   push esi
// 00832ee1  e85af4ffff           call 0x832340
// 00832ee6  6aff                 push -1
// 00832ee8  56                   push esi
// 00832ee9  e8f2edffff           call 0x831ce0
// 00832eee  83c414               add esp, 0x14
// 00832ef1  85c0                 test eax, eax
// 00832ef3  7405                 je 0x832efa
// 00832ef5  5f                   pop edi
// 00832ef6  33c0                 xor eax, eax
// 00832ef8  5e                   pop esi
// 00832ef9  c3                   ret 
// 00832efa  6afe                 push -2
// 00832efc  56                   push esi
// 00832efd  e8feebffff           call 0x831b00
// 00832f02  6a00                 push 0
// 00832f04  6a00                 push 0
// 00832f06  56                   push esi
// 00832f07  e814f5ffff           call 0x832420
// 00832f0c  6aff                 push -1
// 00832f0e  56                   push esi
// 00832f0f  e89cedffff           call 0x831cb0
// 00832f14  57                   push edi
// 00832f15  68f0d8ffff           push 0xffffd8f0
// 00832f1a  56                   push esi
// 00832f1b  e860f6ffff           call 0x832580
// 00832f20  83c428               add esp, 0x28
// 00832f23  5f                   pop edi
// 00832f24  b801000000           mov eax, 1
// 00832f29  5e                   pop esi
// 00832f2a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
