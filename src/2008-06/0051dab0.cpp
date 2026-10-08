// from server: 100% by auto
// roc 2008-06 0051dab0  unit: seg_00510000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dab0
//
// 0051dab0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051dab4  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0051dab7  85c0                 test eax, eax
// 0051dab9  7406                 je 0x51dac1
// 0051dabb  894c2404             mov dword ptr [esp + 4], ecx
// 0051dabf  ffe0                 jmp eax
// 0051dac1  6890938200           push 0x829390
// 0051dac6  51                   push ecx
// 0051dac7  e8e4be0000           call 0x5299b0
// 0051dacc  83c408               add esp, 8
// 0051dacf  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
