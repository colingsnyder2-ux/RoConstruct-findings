// from server: 100% by auto
// roc 2011-06 00782630  unit: seg_00780000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782630
//
// 00782630  56                   push esi
// 00782631  8b742408             mov esi, dword ptr [esp + 8]
// 00782635  6a00                 push 0
// 00782637  6a03                 push 3
// 00782639  56                   push esi
// 0078263a  e8a10bfeff           call 0x7631e0
// 0078263f  50                   push eax
// 00782640  56                   push esi
// 00782641  e8fa02feff           call 0x762940
// 00782646  83c414               add esp, 0x14
// 00782649  b801000000           mov eax, 1
// 0078264e  5e                   pop esi
// 0078264f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
