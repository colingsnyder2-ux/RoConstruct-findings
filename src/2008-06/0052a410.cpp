// from server: 100% by auto
// roc 2008-06 0052a410  unit: seg_00520000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a410
//
// 0052a410  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a414  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052a418  8b542408             mov edx, dword ptr [esp + 8]
// 0052a41c  50                   push eax
// 0052a41d  51                   push ecx
// 0052a41e  52                   push edx
// 0052a41f  e8bc731700           call 0x6a17e0
// 0052a424  83c40c               add esp, 0xc
// 0052a427  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
