// roc 2007-03 005229b0  unit: seg_00520000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005229b0
//
// 005229b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005229b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005229b8  8908                 mov dword ptr [eax], ecx
// 005229ba  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
