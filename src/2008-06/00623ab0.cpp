// roc 2008-06 00623ab0  unit: lua_exception  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623ab0
//
// 00623ab0  83ec10               sub esp, 0x10
// 00623ab3  56                   push esi
// 00623ab4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00623ab8  8d442404             lea eax, [esp + 4]
// 00623abc  50                   push eax
// 00623abd  56                   push esi
// 00623abe  e89d8b0300           call 0x65c660
// 00623ac3  83c408               add esp, 8
// 00623ac6  85c0                 test eax, eax
// 00623ac8  8bc6                 mov eax, esi
// 00623aca  7404                 je 0x623ad0
// 00623acc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00623ad0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00623ad4  68684a8400           push 0x844a68
// 00623ad9  50                   push eax
// 00623ada  51                   push ecx
// 00623adb  e820ffffff           call 0x623a00
// 00623ae0  83c40c               add esp, 0xc
// 00623ae3  5e                   pop esi
// 00623ae4  83c410               add esp, 0x10
// 00623ae7  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
