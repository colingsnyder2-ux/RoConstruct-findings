// roc 2009-06 005939e0  unit: seg_00590000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005939e0
//
// 005939e0  8b442404             mov eax, dword ptr [esp + 4]
// 005939e4  80784a00             cmp byte ptr [eax + 0x4a], 0
// 005939e8  56                   push esi
// 005939e9  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 005939ef  740f                 je 0x593a00
// 005939f1  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 005939f7  8b5108               mov edx, dword ptr [ecx + 8]
// 005939fa  50                   push eax
// 005939fb  ffd2                 call edx
// 005939fd  83c404               add esp, 4
// 00593a00  ff460c               inc dword ptr [esi + 0xc]
// 00593a03  5e                   pop esi
// 00593a04  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
