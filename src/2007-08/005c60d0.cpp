// from server: 100% by auto
// roc 2007-08 005c60d0  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c60d0
//
// 005c60d0  8b4630               mov eax, dword ptr [esi + 0x30]
// 005c60d3  3d204e0000           cmp eax, 0x4e20
// 005c60d8  7e08                 jle 0x5c60e2
// 005c60da  6a05                 push 5
// 005c60dc  56                   push esi
// 005c60dd  e83effffff           call 0x5c6020
// 005c60e2  03c0                 add eax, eax
// 005c60e4  50                   push eax
// 005c60e5  56                   push esi
// 005c60e6  e8a5f9ffff           call 0x5c5a90
// 005c60eb  83c408               add esp, 8
// 005c60ee  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 005c60f5  7e0e                 jle 0x5c6105
// 005c60f7  68c0967b00           push 0x7b96c0
// 005c60fc  56                   push esi
// 005c60fd  e8fe0e0000           call 0x5c7000
// 005c6102  83c408               add esp, 8
// 005c6105  83461418             add dword ptr [esi + 0x14], 0x18
// 005c6109  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c610c  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
