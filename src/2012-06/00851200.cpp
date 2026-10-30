// from server: 100% by auto
// roc 2012-06 00851200  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00851200
//
// 00851200  83ec10               sub esp, 0x10
// 00851203  56                   push esi
// 00851204  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00851208  8d442404             lea eax, [esp + 4]
// 0085120c  50                   push eax
// 0085120d  56                   push esi
// 0085120e  e86d230e00           call 0x933580
// 00851213  83c408               add esp, 8
// 00851216  85c0                 test eax, eax
// 00851218  8bc6                 mov eax, esi
// 0085121a  7404                 je 0x851220
// 0085121c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00851220  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00851224  68082fbd00           push 0xbd2f08
// 00851229  50                   push eax
// 0085122a  51                   push ecx
// 0085122b  e810ffffff           call 0x851140
// 00851230  83c40c               add esp, 0xc
// 00851233  5e                   pop esi
// 00851234  83c410               add esp, 0x10
// 00851237  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
