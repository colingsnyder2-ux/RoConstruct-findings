// from server: 100% by auto
// roc 2012-06 00653550  unit: seg_00650000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653550
//
// 00653550  8b442408             mov eax, dword ptr [esp + 8]
// 00653554  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00653558  50                   push eax
// 00653559  6a00                 push 0
// 0065355b  51                   push ecx
// 0065355c  e813fe3200           call 0x983374
// 00653561  83c40c               add esp, 0xc
// 00653564  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
