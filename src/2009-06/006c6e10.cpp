// roc 2009-06 006c6e10  unit: seg_006c0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6e10
//
// 006c6e10  56                   push esi
// 006c6e11  8b742408             mov esi, dword ptr [esp + 8]
// 006c6e15  6a01                 push 1
// 006c6e17  e844ffffff           call 0x6c6d60
// 006c6e1c  6aff                 push -1
// 006c6e1e  56                   push esi
// 006c6e1f  e88c21ffff           call 0x6b8fb0
// 006c6e24  83c40c               add esp, 0xc
// 006c6e27  85c0                 test eax, eax
// 006c6e29  7415                 je 0x6c6e40
// 006c6e2b  68eed8ffff           push 0xffffd8ee
// 006c6e30  56                   push esi
// 006c6e31  e80a21ffff           call 0x6b8f40
// 006c6e36  83c408               add esp, 8
// 006c6e39  b801000000           mov eax, 1
// 006c6e3e  5e                   pop esi
// 006c6e3f  c3                   ret 
// 006c6e40  6aff                 push -1
// 006c6e42  56                   push esi
// 006c6e43  e82829ffff           call 0x6b9770
// 006c6e48  83c408               add esp, 8
// 006c6e4b  b801000000           mov eax, 1
// 006c6e50  5e                   pop esi
// 006c6e51  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
