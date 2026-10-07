// roc 2010-06 00733e90  unit: seg_00730000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733e90
//
// 00733e90  83ec10               sub esp, 0x10
// 00733e93  56                   push esi
// 00733e94  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00733e98  8d442404             lea eax, [esp + 4]
// 00733e9c  50                   push eax
// 00733e9d  56                   push esi
// 00733e9e  e88d720400           call 0x77b130
// 00733ea3  83c408               add esp, 8
// 00733ea6  85c0                 test eax, eax
// 00733ea8  8bc6                 mov eax, esi
// 00733eaa  7404                 je 0x733eb0
// 00733eac  8b442420             mov eax, dword ptr [esp + 0x20]
// 00733eb0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00733eb4  6860dea400           push 0xa4de60
// 00733eb9  50                   push eax
// 00733eba  51                   push ecx
// 00733ebb  e810ffffff           call 0x733dd0
// 00733ec0  83c40c               add esp, 0xc
// 00733ec3  5e                   pop esi
// 00733ec4  83c410               add esp, 0x10
// 00733ec7  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
