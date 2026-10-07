// roc 2008-06 0051f650  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051f650
//
// 0051f650  53                   push ebx
// 0051f651  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051f655  55                   push ebp
// 0051f656  53                   push ebx
// 0051f657  e854060000           call 0x51fcb0
// 0051f65c  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 0051f662  83c404               add esp, 4
// 0051f665  89abd0000000         mov dword ptr [ebx + 0xd0], ebp
// 0051f66b  85c0                 test eax, eax
// 0051f66d  7e30                 jle 0x51f69f
// 0051f66f  56                   push esi
// 0051f670  89442410             mov dword ptr [esp + 0x10], eax
// 0051f674  57                   push edi
// 0051f675  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051f679  85ed                 test ebp, ebp
// 0051f67b  7619                 jbe 0x51f696
// 0051f67d  8bfd                 mov edi, ebp
// 0051f67f  90                   nop 
// 0051f680  8b06                 mov eax, dword ptr [esi]
// 0051f682  6a00                 push 0
// 0051f684  50                   push eax
// 0051f685  53                   push ebx
// 0051f686  e8b5faffff           call 0x51f140
// 0051f68b  83c40c               add esp, 0xc
// 0051f68e  83c604               add esi, 4
// 0051f691  83ef01               sub edi, 1
// 0051f694  75ea                 jne 0x51f680
// 0051f696  836c241401           sub dword ptr [esp + 0x14], 1
// 0051f69b  75d8                 jne 0x51f675
// 0051f69d  5f                   pop edi
// 0051f69e  5e                   pop esi
// 0051f69f  5d                   pop ebp
// 0051f6a0  5b                   pop ebx
// 0051f6a1  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_read_image)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
