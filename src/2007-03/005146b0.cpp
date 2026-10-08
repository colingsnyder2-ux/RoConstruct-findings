// roc 2007-03 005146b0  unit: seg_00510000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005146b0
//
// 005146b0  8b442408             mov eax, dword ptr [esp + 8]
// 005146b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005146b8  50                   push eax
// 005146b9  6a00                 push 0
// 005146bb  51                   push ecx
// 005146bc  e85ba91000           call 0x61f01c
// 005146c1  83c40c               add esp, 0xc
// 005146c4  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
