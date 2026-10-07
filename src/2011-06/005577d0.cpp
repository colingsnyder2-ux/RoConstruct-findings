// roc 2011-06 005577d0  unit: seg_00550000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005577d0
//
// 005577d0  8b442404             mov eax, dword ptr [esp + 4]
// 005577d4  8b10                 mov edx, dword ptr [eax]
// 005577d6  33c9                 xor ecx, ecx
// 005577d8  894a6c               mov dword ptr [edx + 0x6c], ecx
// 005577db  8b00                 mov eax, dword ptr [eax]
// 005577dd  894814               mov dword ptr [eax + 0x14], ecx
// 005577e0  c3                   ret 
// library jpeg-6b/jerror.c (function _reset_error_mgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
