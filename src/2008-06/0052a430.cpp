// from server: 100% by auto
// roc 2008-06 0052a430  unit: seg_00520000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a430
//
// 0052a430  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a434  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052a438  8b542408             mov edx, dword ptr [esp + 8]
// 0052a43c  50                   push eax
// 0052a43d  51                   push ecx
// 0052a43e  52                   push edx
// 0052a43f  e8c0721700           call 0x6a1704
// 0052a444  83c40c               add esp, 0xc
// 0052a447  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
