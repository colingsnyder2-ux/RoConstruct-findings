// roc 2012-06 00832fc0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832fc0
//
// 00832fc0  56                   push esi
// 00832fc1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00832fc5  8d860f270000         lea eax, [esi + 0x270f]
// 00832fcb  57                   push edi
// 00832fcc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00832fd0  3d0f270000           cmp eax, 0x270f
// 00832fd5  770d                 ja 0x832fe4
// 00832fd7  57                   push edi
// 00832fd8  e813ebffff           call 0x831af0
// 00832fdd  83c404               add esp, 4
// 00832fe0  8d740601             lea esi, [esi + eax + 1]
// 00832fe4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00832fe8  51                   push ecx
// 00832fe9  56                   push esi
// 00832fea  57                   push edi
// 00832feb  e870ffffff           call 0x832f60
// 00832ff0  83c40c               add esp, 0xc
// 00832ff3  85c0                 test eax, eax
// 00832ff5  7503                 jne 0x832ffa
// 00832ff7  5f                   pop edi
// 00832ff8  5e                   pop esi
// 00832ff9  c3                   ret 
// 00832ffa  56                   push esi
// 00832ffb  57                   push edi
// 00832ffc  e8afecffff           call 0x831cb0
// 00833001  6a01                 push 1
// 00833003  6a01                 push 1
// 00833005  57                   push edi
// 00833006  e805f8ffff           call 0x832810
// 0083300b  83c414               add esp, 0x14
// 0083300e  5f                   pop edi
// 0083300f  b801000000           mov eax, 1
// 00833014  5e                   pop esi
// 00833015  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
