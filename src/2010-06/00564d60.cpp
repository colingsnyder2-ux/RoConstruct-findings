// roc 2010-06 00564d60  unit: seg_00560000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564d60
//
// 00564d60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564d64  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00564d6a  85c0                 test eax, eax
// 00564d6c  7406                 je 0x564d74
// 00564d6e  894c2404             mov dword ptr [esp + 4], ecx
// 00564d72  ffe0                 jmp eax
// 00564d74  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
