// roc 2010-06 0056d3e0  unit: seg_00560000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d3e0
//
// 0056d3e0  8b442408             mov eax, dword ptr [esp + 8]
// 0056d3e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d3e8  50                   push eax
// 0056d3e9  6a00                 push 0
// 0056d3eb  51                   push ecx
// 0056d3ec  e8f3b72300           call 0x7a8be4
// 0056d3f1  83c40c               add esp, 0xc
// 0056d3f4  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
