// from server: 100% by auto
// roc 2012-06 00646ec0  unit: seg_00640000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646ec0
//
// 00646ec0  837c240400           cmp dword ptr [esp + 4], 0
// 00646ec5  741b                 je 0x646ee2
// 00646ec7  8b442408             mov eax, dword ptr [esp + 8]
// 00646ecb  85c0                 test eax, eax
// 00646ecd  7413                 je 0x646ee2
// 00646ecf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646ed3  8b11                 mov edx, dword ptr [ecx]
// 00646ed5  895044               mov dword ptr [eax + 0x44], edx
// 00646ed8  8a4904               mov cl, byte ptr [ecx + 4]
// 00646edb  83480802             or dword ptr [eax + 8], 2
// 00646edf  884848               mov byte ptr [eax + 0x48], cl
// 00646ee2  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
