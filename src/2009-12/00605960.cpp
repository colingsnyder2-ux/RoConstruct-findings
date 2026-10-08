// roc 2009-12 00605960  unit: seg_00600000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00605960
//
// 00605960  8b442410             mov eax, dword ptr [esp + 0x10]
// 00605964  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00605968  8b542408             mov edx, dword ptr [esp + 8]
// 0060596c  6a00                 push 0
// 0060596e  6a00                 push 0
// 00605970  6a00                 push 0
// 00605972  50                   push eax
// 00605973  8b442414             mov eax, dword ptr [esp + 0x14]
// 00605977  51                   push ecx
// 00605978  52                   push edx
// 00605979  50                   push eax
// 0060597a  e8f1eaffff           call 0x604470
// 0060597f  83c41c               add esp, 0x1c
// 00605982  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
