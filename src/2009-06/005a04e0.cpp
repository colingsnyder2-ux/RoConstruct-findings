// roc 2009-06 005a04e0  unit: seg_005a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a04e0
//
// 005a04e0  8b442404             mov eax, dword ptr [esp + 4]
// 005a04e4  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 005a04ea  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 005a04ee  c3                   ret 
// library jpeg-6b/jquant2.c (function _new_color_map_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
