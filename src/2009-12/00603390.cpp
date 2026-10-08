// roc 2009-12 00603390  unit: seg_00600000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603390
//
// 00603390  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00603394  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00603397  85c0                 test eax, eax
// 00603399  7406                 je 0x6033a1
// 0060339b  894c2404             mov dword ptr [esp + 4], ecx
// 0060339f  ffe0                 jmp eax
// 006033a1  68b8379c00           push 0x9c37b8
// 006033a6  51                   push ecx
// 006033a7  e8e4cd0000           call 0x610190
// 006033ac  83c408               add esp, 8
// 006033af  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
