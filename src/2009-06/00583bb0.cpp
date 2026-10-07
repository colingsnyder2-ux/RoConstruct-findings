// roc 2009-06 00583bb0  unit: seg_00580000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00583bb0
//
// 00583bb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583bb4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00583bb8  8b542408             mov edx, dword ptr [esp + 8]
// 00583bbc  6a00                 push 0
// 00583bbe  6a00                 push 0
// 00583bc0  6a00                 push 0
// 00583bc2  50                   push eax
// 00583bc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00583bc7  51                   push ecx
// 00583bc8  52                   push edx
// 00583bc9  50                   push eax
// 00583bca  e8f1eaffff           call 0x5826c0
// 00583bcf  83c41c               add esp, 0x1c
// 00583bd2  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
