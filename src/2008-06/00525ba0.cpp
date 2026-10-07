// roc 2008-06 00525ba0  unit: seg_00520000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525ba0
//
// 00525ba0  8b442408             mov eax, dword ptr [esp + 8]
// 00525ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525ba8  50                   push eax
// 00525ba9  6a00                 push 0
// 00525bab  51                   push ecx
// 00525bac  e853bb1700           call 0x6a1704
// 00525bb1  83c40c               add esp, 0xc
// 00525bb4  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
