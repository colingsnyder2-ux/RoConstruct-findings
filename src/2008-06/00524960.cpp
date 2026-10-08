// from server: 100% by auto
// roc 2008-06 00524960  unit: seg_00520000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524960
//
// 00524960  837c240400           cmp dword ptr [esp + 4], 0
// 00524965  7421                 je 0x524988
// 00524967  8b442408             mov eax, dword ptr [esp + 8]
// 0052496b  85c0                 test eax, eax
// 0052496d  7419                 je 0x524988
// 0052496f  f6400801             test byte ptr [eax + 8], 1
// 00524973  7413                 je 0x524988
// 00524975  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00524979  85c9                 test ecx, ecx
// 0052497b  740b                 je 0x524988
// 0052497d  d94028               fld dword ptr [eax + 0x28]
// 00524980  b801000000           mov eax, 1
// 00524985  dd19                 fstp qword ptr [ecx]
// 00524987  c3                   ret 
// 00524988  33c0                 xor eax, eax
// 0052498a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
