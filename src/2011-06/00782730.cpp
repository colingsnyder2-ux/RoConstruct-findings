// from server: 100% by auto
// roc 2011-06 00782730  unit: seg_00780000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782730
//
// 00782730  56                   push esi
// 00782731  8b742408             mov esi, dword ptr [esp + 8]
// 00782735  6a05                 push 5
// 00782737  6a01                 push 1
// 00782739  56                   push esi
// 0078273a  e8d119feff           call 0x764110
// 0078273f  6a02                 push 2
// 00782741  56                   push esi
// 00782742  e829fcfdff           call 0x762370
// 00782747  6a01                 push 1
// 00782749  56                   push esi
// 0078274a  e8a10bfeff           call 0x7632f0
// 0078274f  83c41c               add esp, 0x1c
// 00782752  85c0                 test eax, eax
// 00782754  7407                 je 0x78275d
// 00782756  b802000000           mov eax, 2
// 0078275b  5e                   pop esi
// 0078275c  c3                   ret 
// 0078275d  56                   push esi
// 0078275e  e89d01feff           call 0x762900
// 00782763  83c404               add esp, 4
// 00782766  b801000000           mov eax, 1
// 0078276b  5e                   pop esi
// 0078276c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
