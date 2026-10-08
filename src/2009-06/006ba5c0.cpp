// from server: 100% by auto
// roc 2009-06 006ba5c0  unit: RBX::UniversalTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba5c0
//
// 006ba5c0  56                   push esi
// 006ba5c1  8b742408             mov esi, dword ptr [esp + 8]
// 006ba5c5  8b06                 mov eax, dword ptr [esi]
// 006ba5c7  2bc6                 sub eax, esi
// 006ba5c9  83e80c               sub eax, 0xc
// 006ba5cc  7418                 je 0x6ba5e6
// 006ba5ce  57                   push edi
// 006ba5cf  50                   push eax
// 006ba5d0  8b4608               mov eax, dword ptr [esi + 8]
// 006ba5d3  8d7e0c               lea edi, [esi + 0xc]
// 006ba5d6  57                   push edi
// 006ba5d7  50                   push eax
// 006ba5d8  e8a3edffff           call 0x6b9380
// 006ba5dd  83c40c               add esp, 0xc
// 006ba5e0  ff4604               inc dword ptr [esi + 4]
// 006ba5e3  893e                 mov dword ptr [esi], edi
// 006ba5e5  5f                   pop edi
// 006ba5e6  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ba5e9  8b5608               mov edx, dword ptr [esi + 8]
// 006ba5ec  51                   push ecx
// 006ba5ed  52                   push edx
// 006ba5ee  e85df7ffff           call 0x6b9d50
// 006ba5f3  83c408               add esp, 8
// 006ba5f6  c7460401000000       mov dword ptr [esi + 4], 1
// 006ba5fd  5e                   pop esi
// 006ba5fe  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_pushresult)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
