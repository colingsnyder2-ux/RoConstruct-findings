// from server: 100% by auto
// roc 2010-06 00584cc0  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584cc0
//
// 00584cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00584cc4  8b08                 mov ecx, dword ptr [eax]
// 00584cc6  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 00584ccd  8b10                 mov edx, dword ptr [eax]
// 00584ccf  89442404             mov dword ptr [esp + 4], eax
// 00584cd3  8b02                 mov eax, dword ptr [edx]
// 00584cd5  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
