// roc 2008-06 00665650  unit: seg_00660000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665650
//
// 00665650  56                   push esi
// 00665651  8b742408             mov esi, dword ptr [esp + 8]
// 00665655  8d4628               lea eax, [esi + 0x28]
// 00665658  50                   push eax
// 00665659  8bc6                 mov eax, esi
// 0066565b  e8f0f8ffff           call 0x664f50
// 00665660  83c404               add esp, 4
// 00665663  894620               mov dword ptr [esi + 0x20], eax
// 00665666  5e                   pop esi
// 00665667  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
