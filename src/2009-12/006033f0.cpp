// roc 2009-12 006033f0  unit: seg_00600000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006033f0
//
// 006033f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006033f4  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 006033fa  85c0                 test eax, eax
// 006033fc  7406                 je 0x603404
// 006033fe  894c2404             mov dword ptr [esp + 4], ecx
// 00603402  ffe0                 jmp eax
// 00603404  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
