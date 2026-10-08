// from server: 100% by auto
// roc 2011-06 00567e40  unit: seg_00560000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567e40
//
// 00567e40  8b442408             mov eax, dword ptr [esp + 8]
// 00567e44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567e48  50                   push eax
// 00567e49  6a00                 push 0
// 00567e4b  51                   push ecx
// 00567e4c  e893342a00           call 0x80b2e4
// 00567e51  83c40c               add esp, 0xc
// 00567e54  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
