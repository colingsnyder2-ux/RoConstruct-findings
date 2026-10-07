// roc 2008-06 00529990  unit: G3D::Line  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529990
//
// 00529990  8b442404             mov eax, dword ptr [esp + 4]
// 00529994  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00529998  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052999c  894848               mov dword ptr [eax + 0x48], ecx
// 0052999f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005299a3  895040               mov dword ptr [eax + 0x40], edx
// 005299a6  894844               mov dword ptr [eax + 0x44], ecx
// 005299a9  c3                   ret 
// library libpng-1.2.5/pngerror.c (function _png_set_error_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngerror.c
