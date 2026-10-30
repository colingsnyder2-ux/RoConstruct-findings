// roc 2007-03 0051a930  unit: seg_00510000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a930
//
// 0051a930  56                   push esi
// 0051a931  8b742408             mov esi, dword ptr [esp + 8]
// 0051a935  8b4604               mov eax, dword ptr [esi + 4]
// 0051a938  8b08                 mov ecx, dword ptr [eax]
// 0051a93a  6a1c                 push 0x1c
// 0051a93c  6a01                 push 1
// 0051a93e  56                   push esi
// 0051a93f  ffd1                 call ecx
// 0051a941  898680010000         mov dword ptr [esi + 0x180], eax
// 0051a947  83c40c               add esp, 0xc
// 0051a94a  c700a0a75100         mov dword ptr [eax], 0x51a7a0
// 0051a950  c7400400a95100       mov dword ptr [eax + 4], 0x51a900
// 0051a957  c6400800             mov byte ptr [eax + 8], 0
// 0051a95b  e870fcffff           call 0x51a5d0
// 0051a960  5e                   pop esi
// 0051a961  c3                   ret 
// library jpeg-6b/jdmaster.c (function _jinit_master_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
