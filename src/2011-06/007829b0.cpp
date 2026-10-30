// from server: 100% by auto
// roc 2011-06 007829b0  unit: seg_00780000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007829b0
//
// 007829b0  53                   push ebx
// 007829b1  56                   push esi
// 007829b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007829b6  57                   push edi
// 007829b7  6a00                 push 0
// 007829b9  6a00                 push 0
// 007829bb  6a01                 push 1
// 007829bd  56                   push esi
// 007829be  e82d18feff           call 0x7641f0
// 007829c3  56                   push esi
// 007829c4  8bf8                 mov edi, eax
// 007829c6  e895f9fdff           call 0x762360
// 007829cb  57                   push edi
// 007829cc  56                   push esi
// 007829cd  8bd8                 mov ebx, eax
// 007829cf  e84c13feff           call 0x763d20
// 007829d4  83c41c               add esp, 0x1c
// 007829d7  85c0                 test eax, eax
// 007829d9  7409                 je 0x7829e4
// 007829db  56                   push esi
// 007829dc  e8ff08feff           call 0x7632e0
// 007829e1  83c404               add esp, 4
// 007829e4  6aff                 push -1
// 007829e6  6a00                 push 0
// 007829e8  56                   push esi
// 007829e9  e89206feff           call 0x763080
// 007829ee  56                   push esi
// 007829ef  e86cf9fdff           call 0x762360
// 007829f4  83c410               add esp, 0x10
// 007829f7  5f                   pop edi
// 007829f8  5e                   pop esi
// 007829f9  2bc3                 sub eax, ebx
// 007829fb  5b                   pop ebx
// 007829fc  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
