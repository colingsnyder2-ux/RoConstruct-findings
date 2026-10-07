// roc 2010-06 00564d00  unit: seg_00560000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564d00
//
// 00564d00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564d04  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00564d07  85c0                 test eax, eax
// 00564d09  7406                 je 0x564d11
// 00564d0b  894c2404             mov dword ptr [esp + 4], ecx
// 00564d0f  ffe0                 jmp eax
// 00564d11  681815a200           push 0xa21518
// 00564d16  51                   push ecx
// 00564d17  e894cd0000           call 0x571ab0
// 00564d1c  83c408               add esp, 8
// 00564d1f  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
