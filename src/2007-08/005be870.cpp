// from server: 100% by auto
// roc 2007-08 005be870  unit: boost::detail::H::?$sp_counted_impl_p  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be870
//
// 005be870  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005be874  83ec64               sub esp, 0x64
// 005be877  56                   push esi
// 005be878  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005be87c  8d442404             lea eax, [esp + 4]
// 005be880  50                   push eax
// 005be881  51                   push ecx
// 005be882  56                   push esi
// 005be883  e8887d0000           call 0x5c6610
// 005be888  83c40c               add esp, 0xc
// 005be88b  85c0                 test eax, eax
// 005be88d  7434                 je 0x5be8c3
// 005be88f  8d542404             lea edx, [esp + 4]
// 005be893  52                   push edx
// 005be894  6888907b00           push 0x7b9088
// 005be899  56                   push esi
// 005be89a  e8e1880000           call 0x5c7180
// 005be89f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005be8a3  83c40c               add esp, 0xc
// 005be8a6  85c0                 test eax, eax
// 005be8a8  7e19                 jle 0x5be8c3
// 005be8aa  50                   push eax
// 005be8ab  8d44242c             lea eax, [esp + 0x2c]
// 005be8af  50                   push eax
// 005be8b0  6880907b00           push 0x7b9080
// 005be8b5  56                   push esi
// 005be8b6  e8d5f3ffff           call 0x5bdc90
// 005be8bb  83c410               add esp, 0x10
// 005be8be  5e                   pop esi
// 005be8bf  83c464               add esp, 0x64
// 005be8c2  c3                   ret 
// 005be8c3  6a00                 push 0
// 005be8c5  6854597800           push 0x785954
// 005be8ca  56                   push esi
// 005be8cb  e8e0f2ffff           call 0x5bdbb0
// 005be8d0  83c40c               add esp, 0xc
// 005be8d3  5e                   pop esi
// 005be8d4  83c464               add esp, 0x64
// 005be8d7  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
