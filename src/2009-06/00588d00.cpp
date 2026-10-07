// roc 2009-06 00588d00  unit: seg_00580000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588d00
//
// 00588d00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00588d04  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00588d07  85c0                 test eax, eax
// 00588d09  7406                 je 0x588d11
// 00588d0b  894c2404             mov dword ptr [esp + 4], ecx
// 00588d0f  ffe0                 jmp eax
// 00588d11  6890e48c00           push 0x8ce490
// 00588d16  51                   push ecx
// 00588d17  e844540000           call 0x58e160
// 00588d1c  83c408               add esp, 8
// 00588d1f  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
