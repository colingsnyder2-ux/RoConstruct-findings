// from server: 100% by auto
// roc 2008-06 00625300  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625300
//
// 00625300  56                   push esi
// 00625301  8b742408             mov esi, dword ptr [esp + 8]
// 00625305  6a05                 push 5
// 00625307  6a01                 push 1
// 00625309  56                   push esi
// 0062530a  e831c3feff           call 0x611640
// 0062530f  6a06                 push 6
// 00625311  6a02                 push 2
// 00625313  56                   push esi
// 00625314  e827c3feff           call 0x611640
// 00625319  56                   push esi
// 0062531a  e8c1cefeff           call 0x6121e0
// 0062531f  6a01                 push 1
// 00625321  56                   push esi
// 00625322  e859d8feff           call 0x612b80
// 00625327  83c424               add esp, 0x24
// 0062532a  85c0                 test eax, eax
// 0062532c  744a                 je 0x625378
// 0062532e  8bff                 mov edi, edi
// 00625330  6a02                 push 2
// 00625332  56                   push esi
// 00625333  e898cafeff           call 0x611dd0
// 00625338  6afd                 push -3
// 0062533a  56                   push esi
// 0062533b  e890cafeff           call 0x611dd0
// 00625340  6afd                 push -3
// 00625342  56                   push esi
// 00625343  e888cafeff           call 0x611dd0
// 00625348  6a01                 push 1
// 0062534a  6a02                 push 2
// 0062534c  56                   push esi
// 0062534d  e8ced5feff           call 0x612920
// 00625352  6aff                 push -1
// 00625354  56                   push esi
// 00625355  e8a6cafeff           call 0x611e00
// 0062535a  83c42c               add esp, 0x2c
// 0062535d  85c0                 test eax, eax
// 0062535f  751b                 jne 0x62537c
// 00625361  6afd                 push -3
// 00625363  56                   push esi
// 00625364  e8b7c8feff           call 0x611c20
// 00625369  6a01                 push 1
// 0062536b  56                   push esi
// 0062536c  e80fd8feff           call 0x612b80
// 00625371  83c410               add esp, 0x10
// 00625374  85c0                 test eax, eax
// 00625376  75b8                 jne 0x625330
// 00625378  33c0                 xor eax, eax
// 0062537a  5e                   pop esi
// 0062537b  c3                   ret 
// 0062537c  b801000000           mov eax, 1
// 00625381  5e                   pop esi
// 00625382  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
