// roc 2010-06 0056c410  unit: seg_00560000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c410
//
// 0056c410  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056c414  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0056c417  85c0                 test eax, eax
// 0056c419  7406                 je 0x56c421
// 0056c41b  894c2404             mov dword ptr [esp + 4], ecx
// 0056c41f  ffe0                 jmp eax
// 0056c421  689430a200           push 0xa23094
// 0056c426  51                   push ecx
// 0056c427  e884560000           call 0x571ab0
// 0056c42c  83c408               add esp, 8
// 0056c42f  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
