// roc 2008-06 00610f40  unit: RBX::BlockBlockContact  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610f40
//
// 00610f40  56                   push esi
// 00610f41  8b742408             mov esi, dword ptr [esp + 8]
// 00610f45  8b06                 mov eax, dword ptr [esi]
// 00610f47  2bc6                 sub eax, esi
// 00610f49  83e80c               sub eax, 0xc
// 00610f4c  741e                 je 0x610f6c
// 00610f4e  57                   push edi
// 00610f4f  50                   push eax
// 00610f50  8b4608               mov eax, dword ptr [esi + 8]
// 00610f53  8d7e0c               lea edi, [esi + 0xc]
// 00610f56  57                   push edi
// 00610f57  50                   push eax
// 00610f58  e8e3120000           call 0x612240
// 00610f5d  ff4604               inc dword ptr [esi + 4]
// 00610f60  56                   push esi
// 00610f61  893e                 mov dword ptr [esi], edi
// 00610f63  e868ffffff           call 0x610ed0
// 00610f68  83c410               add esp, 0x10
// 00610f6b  5f                   pop edi
// 00610f6c  8d460c               lea eax, [esi + 0xc]
// 00610f6f  5e                   pop esi
// 00610f70  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
