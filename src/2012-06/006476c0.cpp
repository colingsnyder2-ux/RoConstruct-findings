// from server: 100% by auto
// roc 2012-06 006476c0  unit: seg_00640000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006476c0
//
// 006476c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006476c4  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006476c7  85c0                 test eax, eax
// 006476c9  7406                 je 0x6476d1
// 006476cb  894c2404             mov dword ptr [esp + 4], ecx
// 006476cf  ffe0                 jmp eax
// 006476d1  684064b800           push 0xb86440
// 006476d6  51                   push ecx
// 006476d7  e8d46a0000           call 0x64e1b0
// 006476dc  83c408               add esp, 8
// 006476df  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_write_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
