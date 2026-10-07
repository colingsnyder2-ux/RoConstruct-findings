// roc 2008-06 00533eb0  unit: seg_00530000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533eb0
//
// 00533eb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533eb4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00533eb8  8908                 mov dword ptr [eax], ecx
// 00533eba  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
