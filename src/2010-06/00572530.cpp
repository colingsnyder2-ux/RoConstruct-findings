// from server: 100% by auto
// roc 2010-06 00572530  unit: seg_00570000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572530
//
// 00572530  8b442410             mov eax, dword ptr [esp + 0x10]
// 00572534  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00572538  8b542408             mov edx, dword ptr [esp + 8]
// 0057253c  50                   push eax
// 0057253d  51                   push ecx
// 0057253e  52                   push edx
// 0057253f  e8a0662300           call 0x7a8be4
// 00572544  83c40c               add esp, 0xc
// 00572547  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
