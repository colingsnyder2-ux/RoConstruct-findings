// roc 2007-08 00618a40  unit: seg_00610000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00618a40
//
// 00618a40  56                   push esi
// 00618a41  8b742408             mov esi, dword ptr [esp + 8]
// 00618a45  8d4628               lea eax, [esi + 0x28]
// 00618a48  50                   push eax
// 00618a49  8bc6                 mov eax, esi
// 00618a4b  e8e0f8ffff           call 0x618330
// 00618a50  83c404               add esp, 4
// 00618a53  894620               mov dword ptr [esi + 0x20], eax
// 00618a56  5e                   pop esi
// 00618a57  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
