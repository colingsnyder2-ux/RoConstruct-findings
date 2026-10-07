// roc 2012-06 00648cc0  unit: seg_00640000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00648cc0
//
// 00648cc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00648cc4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00648cc8  8b542408             mov edx, dword ptr [esp + 8]
// 00648ccc  6a00                 push 0
// 00648cce  6a00                 push 0
// 00648cd0  6a00                 push 0
// 00648cd2  50                   push eax
// 00648cd3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00648cd7  51                   push ecx
// 00648cd8  52                   push edx
// 00648cd9  50                   push eax
// 00648cda  e8f1eaffff           call 0x6477d0
// 00648cdf  83c41c               add esp, 0x1c
// 00648ce2  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
