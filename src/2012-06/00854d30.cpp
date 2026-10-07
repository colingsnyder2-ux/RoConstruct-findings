// roc 2012-06 00854d30  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854d30
//
// 00854d30  8b4630               mov eax, dword ptr [esi + 0x30]
// 00854d33  3d204e0000           cmp eax, 0x4e20
// 00854d38  7e08                 jle 0x854d42
// 00854d3a  6a05                 push 5
// 00854d3c  56                   push esi
// 00854d3d  e83effffff           call 0x854c80
// 00854d42  03c0                 add eax, eax
// 00854d44  50                   push eax
// 00854d45  56                   push esi
// 00854d46  e895f9ffff           call 0x8546e0
// 00854d4b  83c408               add esp, 8
// 00854d4e  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 00854d55  7e0e                 jle 0x854d65
// 00854d57  684039bd00           push 0xbd3940
// 00854d5c  56                   push esi
// 00854d5d  e8aec1ffff           call 0x850f10
// 00854d62  83c408               add esp, 8
// 00854d65  83461418             add dword ptr [esi + 0x14], 0x18
// 00854d69  8b4614               mov eax, dword ptr [esi + 0x14]
// 00854d6c  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
