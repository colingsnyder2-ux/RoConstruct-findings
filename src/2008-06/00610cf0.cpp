// from server: 100% by auto
// roc 2008-06 00610cf0  unit: RBX::BlockBlockContact  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610cf0
//
// 00610cf0  8b442408             mov eax, dword ptr [esp + 8]
// 00610cf4  56                   push esi
// 00610cf5  8b742408             mov esi, dword ptr [esp + 8]
// 00610cf9  50                   push eax
// 00610cfa  56                   push esi
// 00610cfb  e8400e0000           call 0x611b40
// 00610d00  83c408               add esp, 8
// 00610d03  85c0                 test eax, eax
// 00610d05  7513                 jne 0x610d1a
// 00610d07  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00610d0b  51                   push ecx
// 00610d0c  6878378400           push 0x843778
// 00610d11  56                   push esi
// 00610d12  e849ffffff           call 0x610c60
// 00610d17  83c40c               add esp, 0xc
// 00610d1a  5e                   pop esi
// 00610d1b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
