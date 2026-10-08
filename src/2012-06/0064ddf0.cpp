// from server: 100% by auto
// roc 2012-06 0064ddf0  unit: seg_00640000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064ddf0
//
// 0064ddf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064ddf4  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0064ddf7  85c0                 test eax, eax
// 0064ddf9  7406                 je 0x64de01
// 0064ddfb  894c2404             mov dword ptr [esp + 4], ecx
// 0064ddff  ffe0                 jmp eax
// 0064de01  68d46ab800           push 0xb86ad4
// 0064de06  51                   push ecx
// 0064de07  e8a4030000           call 0x64e1b0
// 0064de0c  83c408               add esp, 8
// 0064de0f  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
