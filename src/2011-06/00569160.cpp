// roc 2011-06 00569160  unit: seg_00560000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569160
//
// 00569160  56                   push esi
// 00569161  57                   push edi
// 00569162  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00569166  be01000000           mov esi, 1
// 0056916b  eb03                 jmp 0x569170
// 0056916d  8d4900               lea ecx, [ecx]
// 00569170  56                   push esi
// 00569171  57                   push edi
// 00569172  e8d9feffff           call 0x569050
// 00569177  83c408               add esp, 8
// 0056917a  83ee01               sub esi, 1
// 0056917d  79f1                 jns 0x569170
// 0056917f  8b4704               mov eax, dword ptr [edi + 4]
// 00569182  6a54                 push 0x54
// 00569184  50                   push eax
// 00569185  57                   push edi
// 00569186  e8d58f0000           call 0x572160
// 0056918b  57                   push edi
// 0056918c  c7470400000000       mov dword ptr [edi + 4], 0
// 00569193  e8a8243000           call 0x86b640
// 00569198  83c410               add esp, 0x10
// 0056919b  5f                   pop edi
// 0056919c  5e                   pop esi
// 0056919d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
