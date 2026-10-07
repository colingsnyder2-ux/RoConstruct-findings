// roc 2012-06 00644650  unit: seg_00640000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644650
//
// 00644650  8b442404             mov eax, dword ptr [esp + 4]
// 00644654  8b10                 mov edx, dword ptr [eax]
// 00644656  33c9                 xor ecx, ecx
// 00644658  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0064465b  8b00                 mov eax, dword ptr [eax]
// 0064465d  894814               mov dword ptr [eax + 0x14], ecx
// 00644660  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
