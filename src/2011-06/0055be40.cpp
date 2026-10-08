// from server: 100% by auto
// roc 2011-06 0055be40  unit: seg_00550000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055be40
//
// 0055be40  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055be44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055be48  8b542408             mov edx, dword ptr [esp + 8]
// 0055be4c  6a00                 push 0
// 0055be4e  6a00                 push 0
// 0055be50  6a00                 push 0
// 0055be52  50                   push eax
// 0055be53  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055be57  51                   push ecx
// 0055be58  52                   push edx
// 0055be59  50                   push eax
// 0055be5a  e8f1eaffff           call 0x55a950
// 0055be5f  83c41c               add esp, 0x1c
// 0055be62  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
