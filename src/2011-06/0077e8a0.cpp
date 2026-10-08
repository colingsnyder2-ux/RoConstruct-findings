// from server: 100% by auto
// roc 2011-06 0077e8a0  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e8a0
//
// 0077e8a0  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077e8a3  3d204e0000           cmp eax, 0x4e20
// 0077e8a8  7e08                 jle 0x77e8b2
// 0077e8aa  6a05                 push 5
// 0077e8ac  56                   push esi
// 0077e8ad  e83effffff           call 0x77e7f0
// 0077e8b2  03c0                 add eax, eax
// 0077e8b4  50                   push eax
// 0077e8b5  56                   push esi
// 0077e8b6  e895f9ffff           call 0x77e250
// 0077e8bb  83c408               add esp, 8
// 0077e8be  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0077e8c5  7e0e                 jle 0x77e8d5
// 0077e8c7  687078ab00           push 0xab7870
// 0077e8cc  56                   push esi
// 0077e8cd  e81ef3ffff           call 0x77dbf0
// 0077e8d2  83c408               add esp, 8
// 0077e8d5  83461418             add dword ptr [esi + 0x14], 0x18
// 0077e8d9  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077e8dc  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
