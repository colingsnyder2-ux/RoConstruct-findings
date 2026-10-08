// from server: 100% by auto
// roc 2012-06 00646550  unit: seg_00640000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646550
//
// 00646550  8b442410             mov eax, dword ptr [esp + 0x10]
// 00646554  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646558  8b542408             mov edx, dword ptr [esp + 8]
// 0064655c  6a00                 push 0
// 0064655e  6a00                 push 0
// 00646560  6a00                 push 0
// 00646562  50                   push eax
// 00646563  8b442414             mov eax, dword ptr [esp + 0x14]
// 00646567  51                   push ecx
// 00646568  52                   push edx
// 00646569  50                   push eax
// 0064656a  e8d1fcffff           call 0x646240
// 0064656f  83c41c               add esp, 0x1c
// 00646572  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
