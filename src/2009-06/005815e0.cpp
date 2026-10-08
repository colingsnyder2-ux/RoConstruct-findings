// from server: 100% by auto
// roc 2009-06 005815e0  unit: seg_00580000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005815e0
//
// 005815e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005815e4  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 005815e7  85c0                 test eax, eax
// 005815e9  7406                 je 0x5815f1
// 005815eb  894c2404             mov dword ptr [esp + 4], ecx
// 005815ef  ffe0                 jmp eax
// 005815f1  6818c98c00           push 0x8cc918
// 005815f6  51                   push ecx
// 005815f7  e864cb0000           call 0x58e160
// 005815fc  83c408               add esp, 8
// 005815ff  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
