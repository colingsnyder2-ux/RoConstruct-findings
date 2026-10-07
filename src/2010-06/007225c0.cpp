// roc 2010-06 007225c0  unit: RBX::UniversalTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007225c0
//
// 007225c0  56                   push esi
// 007225c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007225c5  8d860f270000         lea eax, [esi + 0x270f]
// 007225cb  57                   push edi
// 007225cc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007225d0  3d0f270000           cmp eax, 0x270f
// 007225d5  770d                 ja 0x7225e4
// 007225d7  57                   push edi
// 007225d8  e873e9ffff           call 0x720f50
// 007225dd  83c404               add esp, 4
// 007225e0  8d740601             lea esi, [esi + eax + 1]
// 007225e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007225e8  51                   push ecx
// 007225e9  56                   push esi
// 007225ea  57                   push edi
// 007225eb  e870ffffff           call 0x722560
// 007225f0  83c40c               add esp, 0xc
// 007225f3  85c0                 test eax, eax
// 007225f5  7503                 jne 0x7225fa
// 007225f7  5f                   pop edi
// 007225f8  5e                   pop esi
// 007225f9  c3                   ret 
// 007225fa  56                   push esi
// 007225fb  57                   push edi
// 007225fc  e80febffff           call 0x721110
// 00722601  6a01                 push 1
// 00722603  6a01                 push 1
// 00722605  57                   push edi
// 00722606  e865f6ffff           call 0x721c70
// 0072260b  83c414               add esp, 0x14
// 0072260e  5f                   pop edi
// 0072260f  b801000000           mov eax, 1
// 00722614  5e                   pop esi
// 00722615  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
