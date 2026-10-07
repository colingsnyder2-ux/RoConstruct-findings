// roc 2010-06 007379a0  unit: seg_00730000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007379a0
//
// 007379a0  53                   push ebx
// 007379a1  56                   push esi
// 007379a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007379a6  57                   push edi
// 007379a7  6a00                 push 0
// 007379a9  6a00                 push 0
// 007379ab  6a01                 push 1
// 007379ad  56                   push esi
// 007379ae  e8cdb5feff           call 0x722f80
// 007379b3  56                   push esi
// 007379b4  8bf8                 mov edi, eax
// 007379b6  e89595feff           call 0x720f50
// 007379bb  57                   push edi
// 007379bc  56                   push esi
// 007379bd  8bd8                 mov ebx, eax
// 007379bf  e8ecb0feff           call 0x722ab0
// 007379c4  83c41c               add esp, 0x1c
// 007379c7  85c0                 test eax, eax
// 007379c9  7409                 je 0x7379d4
// 007379cb  56                   push esi
// 007379cc  e8ffa4feff           call 0x721ed0
// 007379d1  83c404               add esp, 4
// 007379d4  6aff                 push -1
// 007379d6  6a00                 push 0
// 007379d8  56                   push esi
// 007379d9  e892a2feff           call 0x721c70
// 007379de  56                   push esi
// 007379df  e86c95feff           call 0x720f50
// 007379e4  83c410               add esp, 0x10
// 007379e7  5f                   pop edi
// 007379e8  5e                   pop esi
// 007379e9  2bc3                 sub eax, ebx
// 007379eb  5b                   pop ebx
// 007379ec  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
