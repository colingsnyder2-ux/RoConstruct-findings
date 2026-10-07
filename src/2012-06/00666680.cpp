// roc 2012-06 00666680  unit: seg_00660000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666680
//
// 00666680  8b442404             mov eax, dword ptr [esp + 4]
// 00666684  8b08                 mov ecx, dword ptr [eax]
// 00666686  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 0066668d  8b10                 mov edx, dword ptr [eax]
// 0066668f  89442404             mov dword ptr [esp + 4], eax
// 00666693  8b02                 mov eax, dword ptr [edx]
// 00666695  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
