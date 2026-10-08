// from server: 100% by auto
// roc 2010-06 00565d80  unit: seg_00560000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565d80
//
// 00565d80  8b442404             mov eax, dword ptr [esp + 4]
// 00565d84  8b10                 mov edx, dword ptr [eax]
// 00565d86  33c9                 xor ecx, ecx
// 00565d88  894a6c               mov dword ptr [edx + 0x6c], ecx
// 00565d8b  8b00                 mov eax, dword ptr [eax]
// 00565d8d  894814               mov dword ptr [eax + 0x14], ecx
// 00565d90  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
