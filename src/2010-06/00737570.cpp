// from server: 100% by auto
// roc 2010-06 00737570  unit: seg_00730000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737570
//
// 00737570  56                   push esi
// 00737571  8b742408             mov esi, dword ptr [esp + 8]
// 00737575  6a01                 push 1
// 00737577  56                   push esi
// 00737578  e873b9feff           call 0x722ef0
// 0073757d  6a02                 push 2
// 0073757f  56                   push esi
// 00737580  e86bb9feff           call 0x722ef0
// 00737585  6a02                 push 2
// 00737587  6a01                 push 1
// 00737589  56                   push esi
// 0073758a  e8919cfeff           call 0x721220
// 0073758f  50                   push eax
// 00737590  56                   push esi
// 00737591  e86aa1feff           call 0x721700
// 00737596  83c424               add esp, 0x24
// 00737599  b801000000           mov eax, 1
// 0073759e  5e                   pop esi
// 0073759f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
