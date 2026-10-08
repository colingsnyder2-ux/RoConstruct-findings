// from server: 100% by auto
// roc 2007-08 005bebd0  unit: boost::detail::H::?$sp_counted_impl_p  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bebd0
//
// 005bebd0  56                   push esi
// 005bebd1  8b742408             mov esi, dword ptr [esp + 8]
// 005bebd5  8b06                 mov eax, dword ptr [esi]
// 005bebd7  2bc6                 sub eax, esi
// 005bebd9  83e80c               sub eax, 0xc
// 005bebdc  741f                 je 0x5bebfd
// 005bebde  57                   push edi
// 005bebdf  50                   push eax
// 005bebe0  8b4608               mov eax, dword ptr [esi + 8]
// 005bebe3  8d7e0c               lea edi, [esi + 0xc]
// 005bebe6  57                   push edi
// 005bebe7  50                   push eax
// 005bebe8  e8c3efffff           call 0x5bdbb0
// 005bebed  83460401             add dword ptr [esi + 4], 1
// 005bebf1  56                   push esi
// 005bebf2  893e                 mov dword ptr [esi], edi
// 005bebf4  e857ffffff           call 0x5beb50
// 005bebf9  83c410               add esp, 0x10
// 005bebfc  5f                   pop edi
// 005bebfd  8d460c               lea eax, [esi + 0xc]
// 005bec00  5e                   pop esi
// 005bec01  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
