// roc 2011-06 007825f0  unit: seg_00780000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007825f0
//
// 007825f0  56                   push esi
// 007825f1  8b742408             mov esi, dword ptr [esp + 8]
// 007825f5  6a05                 push 5
// 007825f7  6a01                 push 1
// 007825f9  56                   push esi
// 007825fa  e8111bfeff           call 0x764110
// 007825ff  6a02                 push 2
// 00782601  56                   push esi
// 00782602  e8591bfeff           call 0x764160
// 00782607  6a03                 push 3
// 00782609  56                   push esi
// 0078260a  e8511bfeff           call 0x764160
// 0078260f  6a03                 push 3
// 00782611  56                   push esi
// 00782612  e859fdfdff           call 0x762370
// 00782617  6a01                 push 1
// 00782619  56                   push esi
// 0078261a  e83108feff           call 0x762e50
// 0078261f  83c42c               add esp, 0x2c
// 00782622  b801000000           mov eax, 1
// 00782627  5e                   pop esi
// 00782628  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
