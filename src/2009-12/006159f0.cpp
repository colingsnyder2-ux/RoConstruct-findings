// roc 2009-12 006159f0  unit: seg_00610000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006159f0
//
// 006159f0  8b442404             mov eax, dword ptr [esp + 4]
// 006159f4  80784a00             cmp byte ptr [eax + 0x4a], 0
// 006159f8  56                   push esi
// 006159f9  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 006159ff  740f                 je 0x615a10
// 00615a01  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00615a07  8b5108               mov edx, dword ptr [ecx + 8]
// 00615a0a  50                   push eax
// 00615a0b  ffd2                 call edx
// 00615a0d  83c404               add esp, 4
// 00615a10  ff460c               inc dword ptr [esi + 0xc]
// 00615a13  5e                   pop esi
// 00615a14  c3                   ret 
// library jpeg-6b/jdmaster.c (function _finish_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
