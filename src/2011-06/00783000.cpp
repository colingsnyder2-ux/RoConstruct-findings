// roc 2011-06 00783000  unit: seg_00780000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00783000
//
// 00783000  56                   push esi
// 00783001  8b742408             mov esi, dword ptr [esp + 8]
// 00783005  57                   push edi
// 00783006  56                   push esi
// 00783007  e84406feff           call 0x763650
// 0078300c  6a01                 push 1
// 0078300e  56                   push esi
// 0078300f  8bf8                 mov edi, eax
// 00783011  e83af5fdff           call 0x762550
// 00783016  83c40c               add esp, 0xc
// 00783019  83f806               cmp eax, 6
// 0078301c  750f                 jne 0x78302d
// 0078301e  6a01                 push 1
// 00783020  56                   push esi
// 00783021  e86af5fdff           call 0x762590
// 00783026  83c408               add esp, 8
// 00783029  85c0                 test eax, eax
// 0078302b  7410                 je 0x78303d
// 0078302d  683483ab00           push 0xab8334
// 00783032  6a01                 push 1
// 00783034  56                   push esi
// 00783035  e8660ffeff           call 0x763fa0
// 0078303a  83c40c               add esp, 0xc
// 0078303d  6a01                 push 1
// 0078303f  56                   push esi
// 00783040  e8dbf4fdff           call 0x762520
// 00783045  6a01                 push 1
// 00783047  57                   push edi
// 00783048  56                   push esi
// 00783049  e882f2fdff           call 0x7622d0
// 0078304e  83c414               add esp, 0x14
// 00783051  5f                   pop edi
// 00783052  b801000000           mov eax, 1
// 00783057  5e                   pop esi
// 00783058  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
