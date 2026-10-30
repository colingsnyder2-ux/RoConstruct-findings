// roc 2009-12 00604400  unit: seg_00600000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604400
//
// 00604400  8b442404             mov eax, dword ptr [esp + 4]
// 00604404  8b10                 mov edx, dword ptr [eax]
// 00604406  33c9                 xor ecx, ecx
// 00604408  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0060440b  8b00                 mov eax, dword ptr [eax]
// 0060440d  894814               mov dword ptr [eax + 0x14], ecx
// 00604410  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
