// from server: 100% by auto
// roc 2009-06 006ba240  unit: RBX::UniversalTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba240
//
// 006ba240  56                   push esi
// 006ba241  8b742408             mov esi, dword ptr [esp + 8]
// 006ba245  6a01                 push 1
// 006ba247  56                   push esi
// 006ba248  e883ffffff           call 0x6ba1d0
// 006ba24d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ba251  8d442418             lea eax, [esp + 0x18]
// 006ba255  50                   push eax
// 006ba256  51                   push ecx
// 006ba257  56                   push esi
// 006ba258  e8d3f1ffff           call 0x6b9430
// 006ba25d  6a02                 push 2
// 006ba25f  56                   push esi
// 006ba260  e8ebfaffff           call 0x6b9d50
// 006ba265  56                   push esi
// 006ba266  e895faffff           call 0x6b9d00
// 006ba26b  83c420               add esp, 0x20
// 006ba26e  5e                   pop esi
// 006ba26f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
