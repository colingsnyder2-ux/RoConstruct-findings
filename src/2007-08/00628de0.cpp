// roc 2007-08 00628de0  unit: RBX::AssemblyStage  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628de0
//
// 00628de0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00628de4  83c1ff               add ecx, -1
// 00628de7  b81f85eb51           mov eax, 0x51eb851f
// 00628dec  f7e9                 imul ecx
// 00628dee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00628df2  c1fa04               sar edx, 4
// 00628df5  8bc2                 mov eax, edx
// 00628df7  c1e81f               shr eax, 0x1f
// 00628dfa  56                   push esi
// 00628dfb  8b742408             mov esi, dword ptr [esp + 8]
// 00628dff  57                   push edi
// 00628e00  8d7c0201             lea edi, [edx + eax + 1]
// 00628e04  8bc1                 mov eax, ecx
// 00628e06  83e8ff               sub eax, -1
// 00628e09  f7d8                 neg eax
// 00628e0b  1bc0                 sbb eax, eax
// 00628e0d  23c1                 and eax, ecx
// 00628e0f  81ffff010000         cmp edi, 0x1ff
// 00628e15  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00628e18  8b5108               mov edx, dword ptr [ecx + 8]
// 00628e1b  7f27                 jg 0x628e44
// 00628e1d  c1e009               shl eax, 9
// 00628e20  0bc7                 or eax, edi
// 00628e22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00628e26  c1e008               shl eax, 8
// 00628e29  0bc7                 or eax, edi
// 00628e2b  c1e006               shl eax, 6
// 00628e2e  52                   push edx
// 00628e2f  83c822               or eax, 0x22
// 00628e32  50                   push eax
// 00628e33  e8a8feffff           call 0x628ce0
// 00628e38  83c408               add esp, 8
// 00628e3b  83c701               add edi, 1
// 00628e3e  897e24               mov dword ptr [esi + 0x24], edi
// 00628e41  5f                   pop edi
// 00628e42  5e                   pop esi
// 00628e43  c3                   ret 
// 00628e44  53                   push ebx
// 00628e45  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00628e49  c1e011               shl eax, 0x11
// 00628e4c  0bc3                 or eax, ebx
// 00628e4e  c1e006               shl eax, 6
// 00628e51  52                   push edx
// 00628e52  83c822               or eax, 0x22
// 00628e55  50                   push eax
// 00628e56  e885feffff           call 0x628ce0
// 00628e5b  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628e5e  8b4808               mov ecx, dword ptr [eax + 8]
// 00628e61  51                   push ecx
// 00628e62  57                   push edi
// 00628e63  e878feffff           call 0x628ce0
// 00628e68  83c410               add esp, 0x10
// 00628e6b  83c301               add ebx, 1
// 00628e6e  895e24               mov dword ptr [esi + 0x24], ebx
// 00628e71  5b                   pop ebx
// 00628e72  5f                   pop edi
// 00628e73  5e                   pop esi
// 00628e74  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setlist)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
