// from server: 100% by auto
// roc 2007-08 0051e2f0  unit: seg_00510000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e2f0
//
// 0051e2f0  8b442408             mov eax, dword ptr [esp + 8]
// 0051e2f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051e2f8  50                   push eax
// 0051e2f9  6a00                 push 0
// 0051e2fb  51                   push ecx
// 0051e2fc  e88b281100           call 0x630b8c
// 0051e301  83c40c               add esp, 0xc
// 0051e304  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
