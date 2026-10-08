// from server: 100% by auto
// roc 2008-06 0052a450  unit: seg_00520000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a450
//
// 0052a450  8b442404             mov eax, dword ptr [esp + 4]
// 0052a454  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052a458  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052a45c  898844020000         mov dword ptr [eax + 0x244], ecx
// 0052a462  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052a466  899048020000         mov dword ptr [eax + 0x248], edx
// 0052a46c  89884c020000         mov dword ptr [eax + 0x24c], ecx
// 0052a472  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_set_mem_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
