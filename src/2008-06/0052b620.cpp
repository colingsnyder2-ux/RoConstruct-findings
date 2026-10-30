// from server: 100% by auto
// roc 2008-06 0052b620  unit: seg_00520000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b620
//
// 0052b620  56                   push esi
// 0052b621  57                   push edi
// 0052b622  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052b626  be01000000           mov esi, 1
// 0052b62b  eb03                 jmp 0x52b630
// 0052b62d  8d4900               lea ecx, [ecx]
// 0052b630  56                   push esi
// 0052b631  57                   push edi
// 0052b632  e8d9feffff           call 0x52b510
// 0052b637  83c408               add esp, 8
// 0052b63a  83ee01               sub esi, 1
// 0052b63d  79f1                 jns 0x52b630
// 0052b63f  8b4704               mov eax, dword ptr [edi + 4]
// 0052b642  6a54                 push 0x54
// 0052b644  50                   push eax
// 0052b645  57                   push edi
// 0052b646  e825510000           call 0x530770
// 0052b64b  57                   push edi
// 0052b64c  c7470400000000       mov dword ptr [edi + 4], 0
// 0052b653  e8b81df5ff           call 0x47d410
// 0052b658  83c410               add esp, 0x10
// 0052b65b  5f                   pop edi
// 0052b65c  5e                   pop esi
// 0052b65d  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _self_destruct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
