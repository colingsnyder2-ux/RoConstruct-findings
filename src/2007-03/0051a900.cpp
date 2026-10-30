// roc 2007-03 0051a900  unit: seg_00510000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a900
//
// 0051a900  8b442404             mov eax, dword ptr [esp + 4]
// 0051a904  80784a00             cmp byte ptr [eax + 0x4a], 0
// 0051a908  56                   push esi
// 0051a909  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0051a90f  740f                 je 0x51a920
// 0051a911  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0051a917  8b5108               mov edx, dword ptr [ecx + 8]
// 0051a91a  50                   push eax
// 0051a91b  ffd2                 call edx
// 0051a91d  83c404               add esp, 4
// 0051a920  83460c01             add dword ptr [esi + 0xc], 1
// 0051a924  5e                   pop esi
// 0051a925  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
