// roc 2010-06 00722780  unit: RBX::UniversalTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722780
//
// 00722780  56                   push esi
// 00722781  8b742408             mov esi, dword ptr [esp + 8]
// 00722785  8b06                 mov eax, dword ptr [esi]
// 00722787  2bc6                 sub eax, esi
// 00722789  83e80c               sub eax, 0xc
// 0072278c  741e                 je 0x7227ac
// 0072278e  57                   push edi
// 0072278f  50                   push eax
// 00722790  8b4608               mov eax, dword ptr [esi + 8]
// 00722793  8d7e0c               lea edi, [esi + 0xc]
// 00722796  57                   push edi
// 00722797  50                   push eax
// 00722798  e8b3edffff           call 0x721550
// 0072279d  ff4604               inc dword ptr [esi + 4]
// 007227a0  56                   push esi
// 007227a1  893e                 mov dword ptr [esi], edi
// 007227a3  e868ffffff           call 0x722710
// 007227a8  83c410               add esp, 0x10
// 007227ab  5f                   pop edi
// 007227ac  8d460c               lea eax, [esi + 0xc]
// 007227af  5e                   pop esi
// 007227b0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
