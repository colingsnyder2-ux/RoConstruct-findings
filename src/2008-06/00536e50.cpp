// from server: 100% by auto
// roc 2008-06 00536e50  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536e50
//
// 00536e50  8b442404             mov eax, dword ptr [esp + 4]
// 00536e54  8b08                 mov ecx, dword ptr [eax]
// 00536e56  c741142e000000       mov dword ptr [ecx + 0x14], 0x2e
// 00536e5d  8b10                 mov edx, dword ptr [eax]
// 00536e5f  89442404             mov dword ptr [esp + 4], eax
// 00536e63  8b02                 mov eax, dword ptr [edx]
// 00536e65  ffe0                 jmp eax
// library jpeg-6b/jquant1.c (function _new_color_map_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
