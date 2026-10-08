// from server: 100% by auto
// roc 2011-06 005615d0  unit: seg_00560000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005615d0
//
// 005615d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005615d4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005615d8  8b542408             mov edx, dword ptr [esp + 8]
// 005615dc  50                   push eax
// 005615dd  51                   push ecx
// 005615de  52                   push edx
// 005615df  e8009d2a00           call 0x80b2e4
// 005615e4  83c40c               add esp, 0xc
// 005615e7  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
