// from server: 100% by auto
// roc 2008-06 00610d20  unit: RBX::BlockBlockContact  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610d20
//
// 00610d20  8b442408             mov eax, dword ptr [esp + 8]
// 00610d24  56                   push esi
// 00610d25  8b742408             mov esi, dword ptr [esp + 8]
// 00610d29  50                   push eax
// 00610d2a  56                   push esi
// 00610d2b  e880180000           call 0x6125b0
// 00610d30  83c408               add esp, 8
// 00610d33  85c0                 test eax, eax
// 00610d35  742d                 je 0x610d64
// 00610d37  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00610d3b  51                   push ecx
// 00610d3c  56                   push esi
// 00610d3d  e83e150000           call 0x612280
// 00610d42  6afe                 push -2
// 00610d44  56                   push esi
// 00610d45  e8a6170000           call 0x6124f0
// 00610d4a  6aff                 push -1
// 00610d4c  56                   push esi
// 00610d4d  e8ae100000           call 0x611e00
// 00610d52  83c418               add esp, 0x18
// 00610d55  85c0                 test eax, eax
// 00610d57  750f                 jne 0x610d68
// 00610d59  6afd                 push -3
// 00610d5b  56                   push esi
// 00610d5c  e8bf0e0000           call 0x611c20
// 00610d61  83c408               add esp, 8
// 00610d64  33c0                 xor eax, eax
// 00610d66  5e                   pop esi
// 00610d67  c3                   ret 
// 00610d68  6afe                 push -2
// 00610d6a  56                   push esi
// 00610d6b  e8000f0000           call 0x611c70
// 00610d70  83c408               add esp, 8
// 00610d73  b801000000           mov eax, 1
// 00610d78  5e                   pop esi
// 00610d79  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
