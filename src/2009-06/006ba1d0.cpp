// roc 2009-06 006ba1d0  unit: RBX::UniversalTool  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba1d0
//
// 006ba1d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ba1d4  83ec64               sub esp, 0x64
// 006ba1d7  56                   push esi
// 006ba1d8  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006ba1dc  8d442404             lea eax, [esp + 4]
// 006ba1e0  50                   push eax
// 006ba1e1  51                   push ecx
// 006ba1e2  56                   push esi
// 006ba1e3  e8b8da0000           call 0x6c7ca0
// 006ba1e8  83c40c               add esp, 0xc
// 006ba1eb  85c0                 test eax, eax
// 006ba1ed  7434                 je 0x6ba223
// 006ba1ef  8d542404             lea edx, [esp + 4]
// 006ba1f3  52                   push edx
// 006ba1f4  68fcae8e00           push 0x8eaefc
// 006ba1f9  56                   push esi
// 006ba1fa  e8c1e70000           call 0x6c89c0
// 006ba1ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ba203  83c40c               add esp, 0xc
// 006ba206  85c0                 test eax, eax
// 006ba208  7e19                 jle 0x6ba223
// 006ba20a  50                   push eax
// 006ba20b  8d44242c             lea eax, [esp + 0x2c]
// 006ba20f  50                   push eax
// 006ba210  68f4ae8e00           push 0x8eaef4
// 006ba215  56                   push esi
// 006ba216  e845f2ffff           call 0x6b9460
// 006ba21b  83c410               add esp, 0x10
// 006ba21e  5e                   pop esi
// 006ba21f  83c464               add esp, 0x64
// 006ba222  c3                   ret 
// 006ba223  6a00                 push 0
// 006ba225  6816d28a00           push 0x8ad216
// 006ba22a  56                   push esi
// 006ba22b  e850f1ffff           call 0x6b9380
// 006ba230  83c40c               add esp, 0xc
// 006ba233  5e                   pop esi
// 006ba234  83c464               add esp, 0x64
// 006ba237  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
