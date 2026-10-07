// roc 2007-08 0051fdf0  unit: seg_00510000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051fdf0
//
// 0051fdf0  56                   push esi
// 0051fdf1  57                   push edi
// 0051fdf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051fdf6  be01000000           mov esi, 1
// 0051fdfb  eb03                 jmp 0x51fe00
// 0051fdfd  8d4900               lea ecx, [ecx]
// 0051fe00  56                   push esi
// 0051fe01  57                   push edi
// 0051fe02  e8d9feffff           call 0x51fce0
// 0051fe07  83c408               add esp, 8
// 0051fe0a  83ee01               sub esi, 1
// 0051fe0d  79f1                 jns 0x51fe00
// 0051fe0f  8b4704               mov eax, dword ptr [edi + 4]
// 0051fe12  6a54                 push 0x54
// 0051fe14  50                   push eax
// 0051fe15  57                   push edi
// 0051fe16  e8b5460000           call 0x5244d0
// 0051fe1b  57                   push edi
// 0051fe1c  c7470400000000       mov dword ptr [edi + 4], 0
// 0051fe23  e8f8cdeeff           call 0x40cc20
// 0051fe28  83c410               add esp, 0x10
// 0051fe2b  5f                   pop edi
// 0051fe2c  5e                   pop esi
// 0051fe2d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
