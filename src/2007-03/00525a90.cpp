// roc 2007-03 00525a90  unit: seg_00520000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525a90
//
// 00525a90  8b442404             mov eax, dword ptr [esp + 4]
// 00525a94  8b08                 mov ecx, dword ptr [eax]
// 00525a96  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 00525a9d  8b10                 mov edx, dword ptr [eax]
// 00525a9f  89442404             mov dword ptr [esp + 4], eax
// 00525aa3  8b02                 mov eax, dword ptr [edx]
// 00525aa5  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
