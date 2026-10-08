// from server: 100% by auto
// roc 2007-08 005c72e0  unit: lua_exception  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c72e0
//
// 005c72e0  83ec10               sub esp, 0x10
// 005c72e3  56                   push esi
// 005c72e4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c72e8  8d442404             lea eax, [esp + 4]
// 005c72ec  50                   push eax
// 005c72ed  56                   push esi
// 005c72ee  e8dd8d0400           call 0x6100d0
// 005c72f3  83c408               add esp, 8
// 005c72f6  85c0                 test eax, eax
// 005c72f8  8bc6                 mov eax, esi
// 005c72fa  7404                 je 0x5c7300
// 005c72fc  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c7300  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c7304  68d0977b00           push 0x7b97d0
// 005c7309  50                   push eax
// 005c730a  51                   push ecx
// 005c730b  e820ffffff           call 0x5c7230
// 005c7310  83c40c               add esp, 0xc
// 005c7313  5e                   pop esi
// 005c7314  83c410               add esp, 0x10
// 005c7317  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
