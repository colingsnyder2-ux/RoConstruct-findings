// roc 2008-06 0051fb80  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fb80
//
// 0051fb80  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051fb84  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051fb88  8b542408             mov edx, dword ptr [esp + 8]
// 0051fb8c  6a00                 push 0
// 0051fb8e  6a00                 push 0
// 0051fb90  6a00                 push 0
// 0051fb92  50                   push eax
// 0051fb93  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051fb97  51                   push ecx
// 0051fb98  52                   push edx
// 0051fb99  50                   push eax
// 0051fb9a  e8f1efffff           call 0x51eb90
// 0051fb9f  83c41c               add esp, 0x1c
// 0051fba2  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
