// from server: 100% by auto
// roc 2011-06 00559700  unit: seg_00550000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00559700
//
// 00559700  837c240400           cmp dword ptr [esp + 4], 0
// 00559705  7423                 je 0x55972a
// 00559707  8b442408             mov eax, dword ptr [esp + 8]
// 0055970b  85c0                 test eax, eax
// 0055970d  741b                 je 0x55972a
// 0055970f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00559713  8b11                 mov edx, dword ptr [ecx]
// 00559715  89505a               mov dword ptr [eax + 0x5a], edx
// 00559718  8b5104               mov edx, dword ptr [ecx + 4]
// 0055971b  89505e               mov dword ptr [eax + 0x5e], edx
// 0055971e  668b4908             mov cx, word ptr [ecx + 8]
// 00559722  83480820             or dword ptr [eax + 8], 0x20
// 00559726  66894862             mov word ptr [eax + 0x62], cx
// 0055972a  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
