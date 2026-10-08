// from server: 100% by auto
// roc 2010-06 0056c260  unit: seg_00560000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c260
//
// 0056c260  837c240400           cmp dword ptr [esp + 4], 0
// 0056c265  740c                 je 0x56c273
// 0056c267  8b442408             mov eax, dword ptr [esp + 8]
// 0056c26b  85c0                 test eax, eax
// 0056c26d  7404                 je 0x56c273
// 0056c26f  8a401d               mov al, byte ptr [eax + 0x1d]
// 0056c272  c3                   ret 
// 0056c273  32c0                 xor al, al
// 0056c275  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
