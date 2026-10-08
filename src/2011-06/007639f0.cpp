// from server: 100% by auto
// roc 2011-06 007639f0  unit: seg_00760000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007639f0
//
// 007639f0  56                   push esi
// 007639f1  8b742408             mov esi, dword ptr [esp + 8]
// 007639f5  8b06                 mov eax, dword ptr [esi]
// 007639f7  2bc6                 sub eax, esi
// 007639f9  83e80c               sub eax, 0xc
// 007639fc  741e                 je 0x763a1c
// 007639fe  57                   push edi
// 007639ff  50                   push eax
// 00763a00  8b4608               mov eax, dword ptr [esi + 8]
// 00763a03  8d7e0c               lea edi, [esi + 0xc]
// 00763a06  57                   push edi
// 00763a07  50                   push eax
// 00763a08  e853efffff           call 0x762960
// 00763a0d  ff4604               inc dword ptr [esi + 4]
// 00763a10  56                   push esi
// 00763a11  893e                 mov dword ptr [esi], edi
// 00763a13  e868ffffff           call 0x763980
// 00763a18  83c410               add esp, 0x10
// 00763a1b  5f                   pop edi
// 00763a1c  8d460c               lea eax, [esi + 0xc]
// 00763a1f  5e                   pop esi
// 00763a20  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
