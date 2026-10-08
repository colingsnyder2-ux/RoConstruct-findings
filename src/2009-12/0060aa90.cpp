// roc 2009-12 0060aa90  unit: seg_00600000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060aa90
//
// 0060aa90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060aa94  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0060aa97  85c0                 test eax, eax
// 0060aa99  7406                 je 0x60aaa1
// 0060aa9b  894c2404             mov dword ptr [esp + 4], ecx
// 0060aa9f  ffe0                 jmp eax
// 0060aaa1  6834539c00           push 0x9c5334
// 0060aaa6  51                   push ecx
// 0060aaa7  e8e4560000           call 0x610190
// 0060aaac  83c408               add esp, 8
// 0060aaaf  c3                   ret 
// library libpng-1.2.5/pngrio.c (function _png_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrio.c
