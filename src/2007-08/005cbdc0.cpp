// roc 2007-08 005cbdc0  unit: seg_005c0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbdc0
//
// 005cbdc0  56                   push esi
// 005cbdc1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbdc5  57                   push edi
// 005cbdc6  6a02                 push 2
// 005cbdc8  56                   push esi
// 005cbdc9  e8c236ffff           call 0x5bf490
// 005cbdce  6a05                 push 5
// 005cbdd0  6a01                 push 1
// 005cbdd2  56                   push esi
// 005cbdd3  8bf8                 mov edi, eax
// 005cbdd5  e8f634ffff           call 0x5bf2d0
// 005cbdda  83c701               add edi, 1
// 005cbddd  57                   push edi
// 005cbdde  56                   push esi
// 005cbddf  e8ac1dffff           call 0x5bdb90
// 005cbde4  57                   push edi
// 005cbde5  6a01                 push 1
// 005cbde7  56                   push esi
// 005cbde8  e8b320ffff           call 0x5bdea0
// 005cbded  6aff                 push -1
// 005cbdef  56                   push esi
// 005cbdf0  e87b19ffff           call 0x5bd770
// 005cbdf5  83c430               add esp, 0x30
// 005cbdf8  f7d8                 neg eax
// 005cbdfa  1bc0                 sbb eax, eax
// 005cbdfc  5f                   pop edi
// 005cbdfd  83e002               and eax, 2
// 005cbe00  5e                   pop esi
// 005cbe01  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
