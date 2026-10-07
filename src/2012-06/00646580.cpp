// roc 2012-06 00646580  unit: seg_00640000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646580
//
// 00646580  837c240400           cmp dword ptr [esp + 4], 0
// 00646585  7423                 je 0x6465aa
// 00646587  8b442408             mov eax, dword ptr [esp + 8]
// 0064658b  85c0                 test eax, eax
// 0064658d  741b                 je 0x6465aa
// 0064658f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646593  8b11                 mov edx, dword ptr [ecx]
// 00646595  89505a               mov dword ptr [eax + 0x5a], edx
// 00646598  8b5104               mov edx, dword ptr [ecx + 4]
// 0064659b  89505e               mov dword ptr [eax + 0x5e], edx
// 0064659e  668b4908             mov cx, word ptr [ecx + 8]
// 006465a2  83480820             or dword ptr [eax + 8], 0x20
// 006465a6  66894862             mov word ptr [eax + 0x62], cx
// 006465aa  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
