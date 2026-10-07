// roc 2009-06 00589eb0  unit: seg_00580000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589eb0
//
// 00589eb0  8b442408             mov eax, dword ptr [esp + 8]
// 00589eb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00589eb8  50                   push eax
// 00589eb9  6a00                 push 0
// 00589ebb  51                   push ecx
// 00589ebc  e8b3fd1800           call 0x719c74
// 00589ec1  83c40c               add esp, 0xc
// 00589ec4  c3                   ret 
// library jpeg-6b/jutils.c (function _jzero_far)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
