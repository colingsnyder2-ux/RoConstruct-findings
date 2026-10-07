// roc 2011-06 00782360  unit: seg_00780000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782360
//
// 00782360  56                   push esi
// 00782361  8b742408             mov esi, dword ptr [esp + 8]
// 00782365  57                   push edi
// 00782366  6a02                 push 2
// 00782368  56                   push esi
// 00782369  e8e201feff           call 0x762550
// 0078236e  6a05                 push 5
// 00782370  6a01                 push 1
// 00782372  56                   push esi
// 00782373  8bf8                 mov edi, eax
// 00782375  e8961dfeff           call 0x764110
// 0078237a  83c414               add esp, 0x14
// 0078237d  85ff                 test edi, edi
// 0078237f  7415                 je 0x782396
// 00782381  83ff05               cmp edi, 5
// 00782384  7410                 je 0x782396
// 00782386  683081ab00           push 0xab8130
// 0078238b  6a02                 push 2
// 0078238d  56                   push esi
// 0078238e  e80d1cfeff           call 0x763fa0
// 00782393  83c40c               add esp, 0xc
// 00782396  689445a900           push 0xa94594
// 0078239b  6a01                 push 1
// 0078239d  56                   push esi
// 0078239e  e82d14feff           call 0x7637d0
// 007823a3  83c40c               add esp, 0xc
// 007823a6  85c0                 test eax, eax
// 007823a8  740e                 je 0x7823b8
// 007823aa  680c81ab00           push 0xab810c
// 007823af  56                   push esi
// 007823b0  e85b13feff           call 0x763710
// 007823b5  83c408               add esp, 8
// 007823b8  6a02                 push 2
// 007823ba  56                   push esi
// 007823bb  e8b0fffdff           call 0x762370
// 007823c0  6a01                 push 1
// 007823c2  56                   push esi
// 007823c3  e8780bfeff           call 0x762f40
// 007823c8  83c410               add esp, 0x10
// 007823cb  5f                   pop edi
// 007823cc  b801000000           mov eax, 1
// 007823d1  5e                   pop esi
// 007823d2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
