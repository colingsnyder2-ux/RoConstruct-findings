// roc 2007-03 0050b5a0  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b5a0
//
// 0050b5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0050b5a4  8b10                 mov edx, dword ptr [eax]
// 0050b5a6  33c9                 xor ecx, ecx
// 0050b5a8  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0050b5ab  8b00                 mov eax, dword ptr [eax]
// 0050b5ad  894814               mov dword ptr [eax + 0x14], ecx
// 0050b5b0  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
