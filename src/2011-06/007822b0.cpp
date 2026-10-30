// from server: 100% by auto
// roc 2011-06 007822b0  unit: seg_00780000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007822b0
//
// 007822b0  56                   push esi
// 007822b1  8b742408             mov esi, dword ptr [esp + 8]
// 007822b5  57                   push edi
// 007822b6  6a01                 push 1
// 007822b8  6a02                 push 2
// 007822ba  56                   push esi
// 007822bb  e88020feff           call 0x764340
// 007822c0  6a01                 push 1
// 007822c2  56                   push esi
// 007822c3  8bf8                 mov edi, eax
// 007822c5  e8a600feff           call 0x762370
// 007822ca  6a01                 push 1
// 007822cc  56                   push esi
// 007822cd  e82e03feff           call 0x762600
// 007822d2  83c41c               add esp, 0x1c
// 007822d5  85c0                 test eax, eax
// 007822d7  741e                 je 0x7822f7
// 007822d9  85ff                 test edi, edi
// 007822db  7e1a                 jle 0x7822f7
// 007822dd  57                   push edi
// 007822de  56                   push esi
// 007822df  e8bc13feff           call 0x7636a0
// 007822e4  6a01                 push 1
// 007822e6  56                   push esi
// 007822e7  e83402feff           call 0x762520
// 007822ec  6a02                 push 2
// 007822ee  56                   push esi
// 007822ef  e83c10feff           call 0x763330
// 007822f4  83c418               add esp, 0x18
// 007822f7  56                   push esi
// 007822f8  e8e30ffeff           call 0x7632e0
// 007822fd  83c404               add esp, 4
// 00782300  5f                   pop edi
// 00782301  5e                   pop esi
// 00782302  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
