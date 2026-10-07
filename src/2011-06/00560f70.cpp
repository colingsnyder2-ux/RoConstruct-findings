// roc 2011-06 00560f70  unit: seg_00560000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560f70
//
// 00560f70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00560f74  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00560f77  85c0                 test eax, eax
// 00560f79  7406                 je 0x560f81
// 00560f7b  894c2404             mov dword ptr [esp + 4], ecx
// 00560f7f  ffe0                 jmp eax
// 00560f81  68282ca800           push 0xa82c28
// 00560f86  51                   push ecx
// 00560f87  e8a4030000           call 0x561330
// 00560f8c  83c408               add esp, 8
// 00560f8f  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
