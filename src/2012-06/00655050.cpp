// from server: 100% by auto
// roc 2012-06 00655050  unit: seg_00650000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655050
//
// 00655050  8b442404             mov eax, dword ptr [esp + 4]
// 00655054  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00655058  56                   push esi
// 00655059  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0065505f  740f                 je 0x655070
// 00655061  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00655067  8b5108               mov edx, dword ptr [ecx + 8]
// 0065506a  50                   push eax
// 0065506b  ffd2                 call edx
// 0065506d  83c404               add esp, 4
// 00655070  ff460c               inc dword ptr [esi + 0xc]
// 00655073  5e                   pop esi
// 00655074  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
