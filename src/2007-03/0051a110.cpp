// roc 2007-03 0051a110  unit: seg_00510000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a110
//
// 0051a110  56                   push esi
// 0051a111  57                   push edi
// 0051a112  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051a116  be01000000           mov esi, 1
// 0051a11b  eb03                 jmp 0x51a120
// 0051a11d  8d4900               lea ecx, [ecx]
// 0051a120  56                   push esi
// 0051a121  57                   push edi
// 0051a122  e8d9feffff           call 0x51a000
// 0051a127  83c408               add esp, 8
// 0051a12a  83ee01               sub esi, 1
// 0051a12d  79f1                 jns 0x51a120
// 0051a12f  8b4704               mov eax, dword ptr [edi + 4]
// 0051a132  6a54                 push 0x54
// 0051a134  50                   push eax
// 0051a135  57                   push edi
// 0051a136  e885952000           call 0x7236c0
// 0051a13b  57                   push edi
// 0051a13c  c7470400000000       mov dword ptr [edi + 4], 0
// 0051a143  e878dc1700           call 0x697dc0
// 0051a148  83c410               add esp, 0x10
// 0051a14b  5f                   pop edi
// 0051a14c  5e                   pop esi
// 0051a14d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
