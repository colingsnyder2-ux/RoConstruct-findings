// from server: 100% by auto
// roc 2009-06 00593200  unit: seg_00590000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593200
//
// 00593200  56                   push esi
// 00593201  57                   push edi
// 00593202  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00593206  be01000000           mov esi, 1
// 0059320b  eb03                 jmp 0x593210
// 0059320d  8d4900               lea ecx, [ecx]
// 00593210  56                   push esi
// 00593211  57                   push edi
// 00593212  e8d9feffff           call 0x5930f0
// 00593217  83c408               add esp, 8
// 0059321a  83ee01               sub esi, 1
// 0059321d  79f1                 jns 0x593210
// 0059321f  8b4704               mov eax, dword ptr [edi + 4]
// 00593222  6a54                 push 0x54
// 00593224  50                   push eax
// 00593225  57                   push edi
// 00593226  e825780000           call 0x59aa50
// 0059322b  57                   push edi
// 0059322c  c7470400000000       mov dword ptr [edi + 4], 0
// 00593233  e8a8170e00           call 0x6749e0
// 00593238  83c410               add esp, 0x10
// 0059323b  5f                   pop edi
// 0059323c  5e                   pop esi
// 0059323d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
