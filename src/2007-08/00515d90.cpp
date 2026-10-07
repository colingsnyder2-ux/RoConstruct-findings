// roc 2007-08 00515d90  unit: seg_00510000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515d90
//
// 00515d90  8b442404             mov eax, dword ptr [esp + 4]
// 00515d94  8b10                 mov edx, dword ptr [eax]
// 00515d96  33c9                 xor ecx, ecx
// 00515d98  894a6c               mov dword ptr [edx + 0x6c], ecx
// 00515d9b  8b00                 mov eax, dword ptr [eax]
// 00515d9d  894814               mov dword ptr [eax + 0x14], ecx
// 00515da0  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
