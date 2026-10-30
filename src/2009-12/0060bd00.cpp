// roc 2009-12 0060bd00  unit: seg_00600000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bd00
//
// 0060bd00  8b442408             mov eax, dword ptr [esp + 8]
// 0060bd04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bd08  50                   push eax
// 0060bd09  6a00                 push 0
// 0060bd0b  51                   push ecx
// 0060bd0c  e8938d1e00           call 0x7f4aa4
// 0060bd11  83c40c               add esp, 0xc
// 0060bd14  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
