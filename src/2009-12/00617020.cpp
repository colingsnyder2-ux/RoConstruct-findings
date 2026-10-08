// roc 2009-12 00617020  unit: seg_00610000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00617020
//
// 00617020  56                   push esi
// 00617021  8b742408             mov esi, dword ptr [esp + 8]
// 00617025  8b4668               mov eax, dword ptr [esi + 0x68]
// 00617028  57                   push edi
// 00617029  a801                 test al, 1
// 0061702b  7404                 je 0x617031
// 0061702d  a804                 test al, 4
// 0061702f  750e                 jne 0x61703f
// 00617031  68e0909c00           push 0x9c90e0
// 00617036  56                   push esi
// 00617037  e85491ffff           call 0x610190
// 0061703c  83c408               add esp, 8
// 0061703f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00617043  834e6818             or dword ptr [esi + 0x68], 0x18
// 00617047  85ff                 test edi, edi
// 00617049  740e                 je 0x617059
// 0061704b  68c4909c00           push 0x9c90c4
// 00617050  56                   push esi
// 00617051  e8ea91ffff           call 0x610240
// 00617056  83c408               add esp, 8
// 00617059  57                   push edi
// 0061705a  56                   push esi
// 0061705b  e890fbffff           call 0x616bf0
// 00617060  83c408               add esp, 8
// 00617063  5f                   pop edi
// 00617064  5e                   pop esi
// 00617065  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
