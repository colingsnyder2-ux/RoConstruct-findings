// roc 2009-12 00623160  unit: seg_00620000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623160
//
// 00623160  8b442404             mov eax, dword ptr [esp + 4]
// 00623164  8b08                 mov ecx, dword ptr [eax]
// 00623166  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 0062316d  8b10                 mov edx, dword ptr [eax]
// 0062316f  89442404             mov dword ptr [esp + 4], eax
// 00623173  8b02                 mov eax, dword ptr [edx]
// 00623175  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
