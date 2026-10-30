// from server: 100% by auto
// roc 2009-06 005a1130  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1130
//
// 005a1130  8b442404             mov eax, dword ptr [esp + 4]
// 005a1134  8b08                 mov ecx, dword ptr [eax]
// 005a1136  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 005a113d  8b10                 mov edx, dword ptr [eax]
// 005a113f  89442404             mov dword ptr [esp + 4], eax
// 005a1143  8b02                 mov eax, dword ptr [edx]
// 005a1145  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
