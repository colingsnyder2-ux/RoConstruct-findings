// from server: 100% by auto
// roc 2012-06 00665a30  unit: seg_00660000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665a30
//
// 00665a30  8b442404             mov eax, dword ptr [esp + 4]
// 00665a34  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00665a3a  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 00665a3e  c3                   ret 
// library jpeg-6b/jquant2.c (function _new_color_map_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
