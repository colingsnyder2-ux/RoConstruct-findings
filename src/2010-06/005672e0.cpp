// from server: 100% by auto
// roc 2010-06 005672e0  unit: seg_00560000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005672e0
//
// 005672e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005672e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005672e8  8b542408             mov edx, dword ptr [esp + 8]
// 005672ec  6a00                 push 0
// 005672ee  6a00                 push 0
// 005672f0  6a00                 push 0
// 005672f2  50                   push eax
// 005672f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005672f7  51                   push ecx
// 005672f8  52                   push edx
// 005672f9  50                   push eax
// 005672fa  e8f1eaffff           call 0x565df0
// 005672ff  83c41c               add esp, 0x1c
// 00567302  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
