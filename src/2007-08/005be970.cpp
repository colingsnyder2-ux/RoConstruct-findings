// from server: 100% by auto
// roc 2007-08 005be970  unit: boost::detail::H::?$sp_counted_impl_p  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be970
//
// 005be970  8b442408             mov eax, dword ptr [esp + 8]
// 005be974  56                   push esi
// 005be975  8b742408             mov esi, dword ptr [esp + 8]
// 005be979  50                   push eax
// 005be97a  56                   push esi
// 005be97b  e830ebffff           call 0x5bd4b0
// 005be980  83c408               add esp, 8
// 005be983  85c0                 test eax, eax
// 005be985  7513                 jne 0x5be99a
// 005be987  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005be98b  51                   push ecx
// 005be98c  688c907b00           push 0x7b908c
// 005be991  56                   push esi
// 005be992  e849ffffff           call 0x5be8e0
// 005be997  83c40c               add esp, 0xc
// 005be99a  5e                   pop esi
// 005be99b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
