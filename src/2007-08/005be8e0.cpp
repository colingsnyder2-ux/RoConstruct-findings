// from server: 100% by auto
// roc 2007-08 005be8e0  unit: boost::detail::H::?$sp_counted_impl_p  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be8e0
//
// 005be8e0  56                   push esi
// 005be8e1  8b742408             mov esi, dword ptr [esp + 8]
// 005be8e5  6a01                 push 1
// 005be8e7  56                   push esi
// 005be8e8  e883ffffff           call 0x5be870
// 005be8ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005be8f1  8d442418             lea eax, [esp + 0x18]
// 005be8f5  50                   push eax
// 005be8f6  51                   push ecx
// 005be8f7  56                   push esi
// 005be8f8  e863f3ffff           call 0x5bdc60
// 005be8fd  6a02                 push 2
// 005be8ff  56                   push esi
// 005be900  e82bfcffff           call 0x5be530
// 005be905  56                   push esi
// 005be906  e8d5fbffff           call 0x5be4e0
// 005be90b  83c420               add esp, 0x20
// 005be90e  5e                   pop esi
// 005be90f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
