// from server: 100% by auto
// roc 2007-08 005bea00  unit: boost::detail::H::?$sp_counted_impl_p  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bea00
//
// 005bea00  56                   push esi
// 005bea01  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bea05  8d860f270000         lea eax, [esi + 0x270f]
// 005bea0b  3d0f270000           cmp eax, 0x270f
// 005bea10  57                   push edi
// 005bea11  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bea15  770d                 ja 0x5bea24
// 005bea17  57                   push edi
// 005bea18  e863ebffff           call 0x5bd580
// 005bea1d  83c404               add esp, 4
// 005bea20  8d740601             lea esi, [esi + eax + 1]
// 005bea24  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bea28  51                   push ecx
// 005bea29  56                   push esi
// 005bea2a  57                   push edi
// 005bea2b  e870ffffff           call 0x5be9a0
// 005bea30  83c40c               add esp, 0xc
// 005bea33  85c0                 test eax, eax
// 005bea35  7503                 jne 0x5bea3a
// 005bea37  5f                   pop edi
// 005bea38  5e                   pop esi
// 005bea39  c3                   ret 
// 005bea3a  56                   push esi
// 005bea3b  57                   push edi
// 005bea3c  e8ffecffff           call 0x5bd740
// 005bea41  6a01                 push 1
// 005bea43  6a01                 push 1
// 005bea45  57                   push edi
// 005bea46  e845f8ffff           call 0x5be290
// 005bea4b  83c414               add esp, 0x14
// 005bea4e  5f                   pop edi
// 005bea4f  b801000000           mov eax, 1
// 005bea54  5e                   pop esi
// 005bea55  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
