// from server: 100% by auto
// roc 2008-06 00610d80  unit: RBX::BlockBlockContact  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610d80
//
// 00610d80  56                   push esi
// 00610d81  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00610d85  8d860f270000         lea eax, [esi + 0x270f]
// 00610d8b  57                   push edi
// 00610d8c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00610d90  3d0f270000           cmp eax, 0x270f
// 00610d95  770d                 ja 0x610da4
// 00610d97  57                   push edi
// 00610d98  e8730e0000           call 0x611c10
// 00610d9d  83c404               add esp, 4
// 00610da0  8d740601             lea esi, [esi + eax + 1]
// 00610da4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00610da8  51                   push ecx
// 00610da9  56                   push esi
// 00610daa  57                   push edi
// 00610dab  e870ffffff           call 0x610d20
// 00610db0  83c40c               add esp, 0xc
// 00610db3  85c0                 test eax, eax
// 00610db5  7503                 jne 0x610dba
// 00610db7  5f                   pop edi
// 00610db8  5e                   pop esi
// 00610db9  c3                   ret 
// 00610dba  56                   push esi
// 00610dbb  57                   push edi
// 00610dbc  e80f100000           call 0x611dd0
// 00610dc1  6a01                 push 1
// 00610dc3  6a01                 push 1
// 00610dc5  57                   push edi
// 00610dc6  e8551b0000           call 0x612920
// 00610dcb  83c414               add esp, 0x14
// 00610dce  5f                   pop edi
// 00610dcf  b801000000           mov eax, 1
// 00610dd4  5e                   pop esi
// 00610dd5  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
