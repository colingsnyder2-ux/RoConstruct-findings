// roc 2011-06 007827b0  unit: seg_00780000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007827b0
//
// 007827b0  56                   push esi
// 007827b1  8b742408             mov esi, dword ptr [esp + 8]
// 007827b5  57                   push edi
// 007827b6  6a02                 push 2
// 007827b8  56                   push esi
// 007827b9  e8121bfeff           call 0x7642d0
// 007827be  6a05                 push 5
// 007827c0  6a01                 push 1
// 007827c2  56                   push esi
// 007827c3  8bf8                 mov edi, eax
// 007827c5  e84619feff           call 0x764110
// 007827ca  47                   inc edi
// 007827cb  57                   push edi
// 007827cc  56                   push esi
// 007827cd  e86e01feff           call 0x762940
// 007827d2  57                   push edi
// 007827d3  6a01                 push 1
// 007827d5  56                   push esi
// 007827d6  e87504feff           call 0x762c50
// 007827db  6aff                 push -1
// 007827dd  56                   push esi
// 007827de  e86dfdfdff           call 0x762550
// 007827e3  83c430               add esp, 0x30
// 007827e6  f7d8                 neg eax
// 007827e8  1bc0                 sbb eax, eax
// 007827ea  5f                   pop edi
// 007827eb  83e002               and eax, 2
// 007827ee  5e                   pop esi
// 007827ef  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
