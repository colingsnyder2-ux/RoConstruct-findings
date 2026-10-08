// roc 2009-12 00615210  unit: seg_00610000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615210
//
// 00615210  56                   push esi
// 00615211  57                   push edi
// 00615212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00615216  be01000000           mov esi, 1
// 0061521b  eb03                 jmp 0x615220
// 0061521d  8d4900               lea ecx, [ecx]
// 00615220  56                   push esi
// 00615221  57                   push edi
// 00615222  e8d9feffff           call 0x615100
// 00615227  83c408               add esp, 8
// 0061522a  83ee01               sub esi, 1
// 0061522d  79f1                 jns 0x615220
// 0061522f  8b4704               mov eax, dword ptr [edi + 4]
// 00615232  6a54                 push 0x54
// 00615234  50                   push eax
// 00615235  57                   push edi
// 00615236  e845780000           call 0x61ca80
// 0061523b  57                   push edi
// 0061523c  c7470400000000       mov dword ptr [edi + 4], 0
// 00615243  e848f82300           call 0x854a90
// 00615248  83c410               add esp, 0x10
// 0061524b  5f                   pop edi
// 0061524c  5e                   pop esi
// 0061524d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
