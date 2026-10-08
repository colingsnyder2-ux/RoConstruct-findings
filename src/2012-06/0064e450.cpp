// from server: 100% by auto
// roc 2012-06 0064e450  unit: seg_00640000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064e450
//
// 0064e450  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064e454  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e458  8b542408             mov edx, dword ptr [esp + 8]
// 0064e45c  50                   push eax
// 0064e45d  51                   push ecx
// 0064e45e  52                   push edx
// 0064e45f  e8104f3300           call 0x983374
// 0064e464  83c40c               add esp, 0xc
// 0064e467  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
