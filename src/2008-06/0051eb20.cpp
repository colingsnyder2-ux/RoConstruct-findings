// roc 2008-06 0051eb20  unit: seg_00510000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051eb20
//
// 0051eb20  8b442404             mov eax, dword ptr [esp + 4]
// 0051eb24  8b10                 mov edx, dword ptr [eax]
// 0051eb26  33c9                 xor ecx, ecx
// 0051eb28  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0051eb2b  8b00                 mov eax, dword ptr [eax]
// 0051eb2d  894814               mov dword ptr [eax + 0x14], ecx
// 0051eb30  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
