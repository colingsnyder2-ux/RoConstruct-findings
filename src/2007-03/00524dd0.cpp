// roc 2007-03 00524dd0  unit: seg_00520000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524dd0
//
// 00524dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00524dd4  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00524dda  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 00524dde  c3                   ret 
// library jpeg-6b/jquant2.c (function _new_color_map_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
