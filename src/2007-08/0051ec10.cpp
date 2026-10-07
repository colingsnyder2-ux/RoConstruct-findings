// roc 2007-08 0051ec10  unit: seg_00510000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ec10
//
// 0051ec10  8b442404             mov eax, dword ptr [esp + 4]
// 0051ec14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051ec18  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051ec1c  898844020000         mov dword ptr [eax + 0x244], ecx
// 0051ec22  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051ec26  899048020000         mov dword ptr [eax + 0x248], edx
// 0051ec2c  89884c020000         mov dword ptr [eax + 0x24c], ecx
// 0051ec32  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_set_mem_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
