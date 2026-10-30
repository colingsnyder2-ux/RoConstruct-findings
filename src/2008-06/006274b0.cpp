// from server: 100% by auto
// roc 2008-06 006274b0  unit: seg_00620000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006274b0
//
// 006274b0  56                   push esi
// 006274b1  8b742408             mov esi, dword ptr [esp + 8]
// 006274b5  6a00                 push 0
// 006274b7  6a01                 push 1
// 006274b9  56                   push esi
// 006274ba  e801a2feff           call 0x6116c0
// 006274bf  6a00                 push 0
// 006274c1  6a02                 push 2
// 006274c3  56                   push esi
// 006274c4  e8f7a1feff           call 0x6116c0
// 006274c9  6a02                 push 2
// 006274cb  56                   push esi
// 006274cc  e84fa7feff           call 0x611c20
// 006274d1  6a00                 push 0
// 006274d3  56                   push esi
// 006274d4  e847adfeff           call 0x612220
// 006274d9  6a03                 push 3
// 006274db  6840736200           push 0x627340
// 006274e0  56                   push esi
// 006274e1  e86aaefeff           call 0x612350
// 006274e6  83c434               add esp, 0x34
// 006274e9  b801000000           mov eax, 1
// 006274ee  5e                   pop esi
// 006274ef  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
