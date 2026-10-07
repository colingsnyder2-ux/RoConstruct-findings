// roc 2010-06 00737620  unit: seg_00730000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737620
//
// 00737620  56                   push esi
// 00737621  8b742408             mov esi, dword ptr [esp + 8]
// 00737625  6a00                 push 0
// 00737627  6a03                 push 3
// 00737629  56                   push esi
// 0073762a  e8a1a7feff           call 0x721dd0
// 0073762f  50                   push eax
// 00737630  56                   push esi
// 00737631  e8fa9efeff           call 0x721530
// 00737636  83c414               add esp, 0x14
// 00737639  b801000000           mov eax, 1
// 0073763e  5e                   pop esi
// 0073763f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
