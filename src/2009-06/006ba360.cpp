// from server: 100% by auto
// roc 2009-06 006ba360  unit: RBX::UniversalTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba360
//
// 006ba360  56                   push esi
// 006ba361  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ba365  8d860f270000         lea eax, [esi + 0x270f]
// 006ba36b  57                   push edi
// 006ba36c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ba370  3d0f270000           cmp eax, 0x270f
// 006ba375  770d                 ja 0x6ba384
// 006ba377  57                   push edi
// 006ba378  e803eaffff           call 0x6b8d80
// 006ba37d  83c404               add esp, 4
// 006ba380  8d740601             lea esi, [esi + eax + 1]
// 006ba384  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ba388  51                   push ecx
// 006ba389  56                   push esi
// 006ba38a  57                   push edi
// 006ba38b  e870ffffff           call 0x6ba300
// 006ba390  83c40c               add esp, 0xc
// 006ba393  85c0                 test eax, eax
// 006ba395  7503                 jne 0x6ba39a
// 006ba397  5f                   pop edi
// 006ba398  5e                   pop esi
// 006ba399  c3                   ret 
// 006ba39a  56                   push esi
// 006ba39b  57                   push edi
// 006ba39c  e89febffff           call 0x6b8f40
// 006ba3a1  6a01                 push 1
// 006ba3a3  6a01                 push 1
// 006ba3a5  57                   push edi
// 006ba3a6  e8f5f6ffff           call 0x6b9aa0
// 006ba3ab  83c414               add esp, 0x14
// 006ba3ae  5f                   pop edi
// 006ba3af  b801000000           mov eax, 1
// 006ba3b4  5e                   pop esi
// 006ba3b5  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
