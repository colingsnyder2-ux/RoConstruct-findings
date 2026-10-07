// roc 2008-06 00524ab0  unit: seg_00520000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524ab0
//
// 00524ab0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00524ab4  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00524ab7  85c0                 test eax, eax
// 00524ab9  7406                 je 0x524ac1
// 00524abb  894c2404             mov dword ptr [esp + 4], ecx
// 00524abf  ffe0                 jmp eax
// 00524ac1  6840ad8200           push 0x82ad40
// 00524ac6  51                   push ecx
// 00524ac7  e8e44e0000           call 0x5299b0
// 00524acc  83c408               add esp, 8
// 00524acf  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
