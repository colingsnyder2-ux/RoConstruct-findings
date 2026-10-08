// from server: 100% by auto
// roc 2010-06 00737480  unit: seg_00730000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737480
//
// 00737480  56                   push esi
// 00737481  8b742408             mov esi, dword ptr [esp + 8]
// 00737485  6a01                 push 1
// 00737487  e844ffffff           call 0x7373d0
// 0073748c  6aff                 push -1
// 0073748e  56                   push esi
// 0073748f  e8ec9cfeff           call 0x721180
// 00737494  83c40c               add esp, 0xc
// 00737497  85c0                 test eax, eax
// 00737499  7415                 je 0x7374b0
// 0073749b  68eed8ffff           push 0xffffd8ee
// 007374a0  56                   push esi
// 007374a1  e86a9cfeff           call 0x721110
// 007374a6  83c408               add esp, 8
// 007374a9  b801000000           mov eax, 1
// 007374ae  5e                   pop esi
// 007374af  c3                   ret 
// 007374b0  6aff                 push -1
// 007374b2  56                   push esi
// 007374b3  e888a4feff           call 0x721940
// 007374b8  83c408               add esp, 8
// 007374bb  b801000000           mov eax, 1
// 007374c0  5e                   pop esi
// 007374c1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
