// from server: 100% by auto
// roc 2010-06 00577310  unit: seg_00570000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00577310
//
// 00577310  8b442404             mov eax, dword ptr [esp + 4]
// 00577314  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00577318  56                   push esi
// 00577319  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0057731f  740f                 je 0x577330
// 00577321  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00577327  8b5108               mov edx, dword ptr [ecx + 8]
// 0057732a  50                   push eax
// 0057732b  ffd2                 call edx
// 0057732d  83c404               add esp, 4
// 00577330  ff460c               inc dword ptr [esi + 0xc]
// 00577333  5e                   pop esi
// 00577334  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
