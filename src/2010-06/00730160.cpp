// roc 2010-06 00730160  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730160
//
// 00730160  8b4630               mov eax, dword ptr [esi + 0x30]
// 00730163  3d204e0000           cmp eax, 0x4e20
// 00730168  7e08                 jle 0x730172
// 0073016a  6a05                 push 5
// 0073016c  56                   push esi
// 0073016d  e83effffff           call 0x7300b0
// 00730172  03c0                 add eax, eax
// 00730174  50                   push eax
// 00730175  56                   push esi
// 00730176  e895f9ffff           call 0x72fb10
// 0073017b  83c408               add esp, 8
// 0073017e  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 00730185  7e0e                 jle 0x730195
// 00730187  6824dca400           push 0xa4dc24
// 0073018c  56                   push esi
// 0073018d  e80e3a0000           call 0x733ba0
// 00730192  83c408               add esp, 8
// 00730195  83461418             add dword ptr [esi + 0x14], 0x18
// 00730199  8b4614               mov eax, dword ptr [esi + 0x14]
// 0073019c  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
