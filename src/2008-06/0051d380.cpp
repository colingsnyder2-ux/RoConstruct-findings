// from server: 100% by auto
// roc 2008-06 0051d380  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d380
//
// 0051d380  837c240400           cmp dword ptr [esp + 4], 0
// 0051d385  741b                 je 0x51d3a2
// 0051d387  8b442408             mov eax, dword ptr [esp + 8]
// 0051d38b  85c0                 test eax, eax
// 0051d38d  7413                 je 0x51d3a2
// 0051d38f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d393  8b11                 mov edx, dword ptr [ecx]
// 0051d395  895044               mov dword ptr [eax + 0x44], edx
// 0051d398  8a4904               mov cl, byte ptr [ecx + 4]
// 0051d39b  83480802             or dword ptr [eax + 8], 2
// 0051d39f  884848               mov byte ptr [eax + 0x48], cl
// 0051d3a2  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
