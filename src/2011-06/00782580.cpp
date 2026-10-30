// from server: 100% by auto
// roc 2011-06 00782580  unit: seg_00780000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782580
//
// 00782580  56                   push esi
// 00782581  8b742408             mov esi, dword ptr [esp + 8]
// 00782585  6a01                 push 1
// 00782587  56                   push esi
// 00782588  e8d31bfeff           call 0x764160
// 0078258d  6a02                 push 2
// 0078258f  56                   push esi
// 00782590  e8cb1bfeff           call 0x764160
// 00782595  6a02                 push 2
// 00782597  6a01                 push 1
// 00782599  56                   push esi
// 0078259a  e89100feff           call 0x762630
// 0078259f  50                   push eax
// 007825a0  56                   push esi
// 007825a1  e86a05feff           call 0x762b10
// 007825a6  83c424               add esp, 0x24
// 007825a9  b801000000           mov eax, 1
// 007825ae  5e                   pop esi
// 007825af  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
