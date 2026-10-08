// from server: 100% by auto
// roc 2007-08 0051d790  unit: seg_00510000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d790
//
// 0051d790  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051d794  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0051d797  85c0                 test eax, eax
// 0051d799  7406                 je 0x51d7a1
// 0051d79b  894c2404             mov dword ptr [esp + 4], ecx
// 0051d79f  ffe0                 jmp eax
// 0051d7a1  68842e7a00           push 0x7a2e84
// 0051d7a6  51                   push ecx
// 0051d7a7  e834110000           call 0x51e8e0
// 0051d7ac  83c408               add esp, 8
// 0051d7af  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
