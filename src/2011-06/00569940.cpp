// roc 2011-06 00569940  unit: seg_00560000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569940
//
// 00569940  8b442404             mov eax, dword ptr [esp + 4]
// 00569944  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00569948  56                   push esi
// 00569949  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0056994f  740f                 je 0x569960
// 00569951  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00569957  8b5108               mov edx, dword ptr [ecx + 8]
// 0056995a  50                   push eax
// 0056995b  ffd2                 call edx
// 0056995d  83c404               add esp, 4
// 00569960  ff460c               inc dword ptr [esi + 0xc]
// 00569963  5e                   pop esi
// 00569964  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
