// from server: 100% by auto
// roc 2010-06 007379f0  unit: seg_00730000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007379f0
//
// 007379f0  56                   push esi
// 007379f1  8b742408             mov esi, dword ptr [esp + 8]
// 007379f5  6a01                 push 1
// 007379f7  56                   push esi
// 007379f8  e8f3b4feff           call 0x722ef0
// 007379fd  6a01                 push 1
// 007379ff  56                   push esi
// 00737a00  e81b99feff           call 0x721320
// 00737a05  83c410               add esp, 0x10
// 00737a08  85c0                 test eax, eax
// 00737a0a  751f                 jne 0x737a2b
// 00737a0c  50                   push eax
// 00737a0d  68a0e8a400           push 0xa4e8a0
// 00737a12  6a02                 push 2
// 00737a14  56                   push esi
// 00737a15  e866b5feff           call 0x722f80
// 00737a1a  50                   push eax
// 00737a1b  68e444a000           push 0xa044e4
// 00737a20  56                   push esi
// 00737a21  e87aaafeff           call 0x7224a0
// 00737a26  83c41c               add esp, 0x1c
// 00737a29  5e                   pop esi
// 00737a2a  c3                   ret 
// 00737a2b  56                   push esi
// 00737a2c  e81f95feff           call 0x720f50
// 00737a31  83c404               add esp, 4
// 00737a34  5e                   pop esi
// 00737a35  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
