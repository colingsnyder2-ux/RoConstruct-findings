// from server: 100% by auto
// roc 2007-08 005bf500  unit: boost::detail::H::?$sp_counted_impl_p  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf500
//
// 005bf500  56                   push esi
// 005bf501  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf505  57                   push edi
// 005bf506  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bf50a  56                   push esi
// 005bf50b  57                   push edi
// 005bf50c  e85fe2ffff           call 0x5bd770
// 005bf511  83c408               add esp, 8
// 005bf514  85c0                 test eax, eax
// 005bf516  7f07                 jg 0x5bf51f
// 005bf518  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bf51c  5f                   pop edi
// 005bf51d  5e                   pop esi
// 005bf51e  c3                   ret 
// 005bf51f  56                   push esi
// 005bf520  57                   push edi
// 005bf521  e86affffff           call 0x5bf490
// 005bf526  83c408               add esp, 8
// 005bf529  5f                   pop edi
// 005bf52a  5e                   pop esi
// 005bf52b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
