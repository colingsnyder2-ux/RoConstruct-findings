// roc 2011-06 0057af70  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057af70
//
// 0057af70  8b442404             mov eax, dword ptr [esp + 4]
// 0057af74  8b08                 mov ecx, dword ptr [eax]
// 0057af76  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 0057af7d  8b10                 mov edx, dword ptr [eax]
// 0057af7f  89442404             mov dword ptr [esp + 4], eax
// 0057af83  8b02                 mov eax, dword ptr [edx]
// 0057af85  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
