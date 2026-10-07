// roc 2011-06 0055a840  unit: seg_00550000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055a840
//
// 0055a840  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055a844  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0055a847  85c0                 test eax, eax
// 0055a849  7406                 je 0x55a851
// 0055a84b  894c2404             mov dword ptr [esp + 4], ecx
// 0055a84f  ffe0                 jmp eax
// 0055a851  689025a800           push 0xa82590
// 0055a856  51                   push ecx
// 0055a857  e8d46a0000           call 0x561330
// 0055a85c  83c408               add esp, 8
// 0055a85f  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
