// from server: 100% by auto
// roc 2012-06 00647720  unit: seg_00640000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00647720
//
// 00647720  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00647724  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0064772a  85c0                 test eax, eax
// 0064772c  7406                 je 0x647734
// 0064772e  894c2404             mov dword ptr [esp + 4], ecx
// 00647732  ffe0                 jmp eax
// 00647734  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
