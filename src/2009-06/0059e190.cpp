// roc 2009-06 0059e190  unit: seg_00590000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e190
//
// 0059e190  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e194  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059e198  8908                 mov dword ptr [eax], ecx
// 0059e19a  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
