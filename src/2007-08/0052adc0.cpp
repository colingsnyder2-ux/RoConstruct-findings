// from server: 100% by auto
// roc 2007-08 0052adc0  unit: seg_00520000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052adc0
//
// 0052adc0  8b442404             mov eax, dword ptr [esp + 4]
// 0052adc4  8b08                 mov ecx, dword ptr [eax]
// 0052adc6  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 0052adcd  8b10                 mov edx, dword ptr [eax]
// 0052adcf  89442404             mov dword ptr [esp + 4], eax
// 0052add3  8b02                 mov eax, dword ptr [edx]
// 0052add5  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
