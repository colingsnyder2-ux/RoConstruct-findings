// from server: 100% by auto
// roc 2007-08 00518750  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518750
//
// 00518750  8b442410             mov eax, dword ptr [esp + 0x10]
// 00518754  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00518758  8b542408             mov edx, dword ptr [esp + 8]
// 0051875c  6a00                 push 0
// 0051875e  6a00                 push 0
// 00518760  6a00                 push 0
// 00518762  50                   push eax
// 00518763  8b442414             mov eax, dword ptr [esp + 0x14]
// 00518767  51                   push ecx
// 00518768  52                   push edx
// 00518769  50                   push eax
// 0051876a  e891d6ffff           call 0x515e00
// 0051876f  83c41c               add esp, 0x1c
// 00518772  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_create_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
