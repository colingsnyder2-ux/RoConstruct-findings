// from server: 100% by auto
// roc 2007-08 0051e8c0  unit: seg_00510000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e8c0
//
// 0051e8c0  8b442404             mov eax, dword ptr [esp + 4]
// 0051e8c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051e8c8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051e8cc  894848               mov dword ptr [eax + 0x48], ecx
// 0051e8cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e8d3  895040               mov dword ptr [eax + 0x40], edx
// 0051e8d6  894844               mov dword ptr [eax + 0x44], ecx
// 0051e8d9  c3                   ret 
// library libpng-1.2.5/pngerror.c (function _png_set_error_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngerror.c
