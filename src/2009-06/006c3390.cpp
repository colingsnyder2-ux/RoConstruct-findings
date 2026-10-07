// roc 2009-06 006c3390  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3390
//
// 006c3390  8b4630               mov eax, dword ptr [esi + 0x30]
// 006c3393  3d204e0000           cmp eax, 0x4e20
// 006c3398  7e08                 jle 0x6c33a2
// 006c339a  6a05                 push 5
// 006c339c  56                   push esi
// 006c339d  e83effffff           call 0x6c32e0
// 006c33a2  03c0                 add eax, eax
// 006c33a4  50                   push eax
// 006c33a5  56                   push esi
// 006c33a6  e895f9ffff           call 0x6c2d40
// 006c33ab  83c408               add esp, 8
// 006c33ae  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 006c33b5  7e0e                 jle 0x6c33c5
// 006c33b7  68f0b68e00           push 0x8eb6f0
// 006c33bc  56                   push esi
// 006c33bd  e87e540000           call 0x6c8840
// 006c33c2  83c408               add esp, 8
// 006c33c5  83461418             add dword ptr [esi + 0x14], 0x18
// 006c33c9  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c33cc  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
