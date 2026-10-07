// roc 2009-06 006ba520  unit: RBX::UniversalTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba520
//
// 006ba520  56                   push esi
// 006ba521  8b742408             mov esi, dword ptr [esp + 8]
// 006ba525  8b06                 mov eax, dword ptr [esi]
// 006ba527  2bc6                 sub eax, esi
// 006ba529  83e80c               sub eax, 0xc
// 006ba52c  741e                 je 0x6ba54c
// 006ba52e  57                   push edi
// 006ba52f  50                   push eax
// 006ba530  8b4608               mov eax, dword ptr [esi + 8]
// 006ba533  8d7e0c               lea edi, [esi + 0xc]
// 006ba536  57                   push edi
// 006ba537  50                   push eax
// 006ba538  e843eeffff           call 0x6b9380
// 006ba53d  ff4604               inc dword ptr [esi + 4]
// 006ba540  56                   push esi
// 006ba541  893e                 mov dword ptr [esi], edi
// 006ba543  e868ffffff           call 0x6ba4b0
// 006ba548  83c410               add esp, 0x10
// 006ba54b  5f                   pop edi
// 006ba54c  8d460c               lea eax, [esi + 0xc]
// 006ba54f  5e                   pop esi
// 006ba550  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
