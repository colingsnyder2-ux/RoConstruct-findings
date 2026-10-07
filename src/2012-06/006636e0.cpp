// roc 2012-06 006636e0  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006636e0
//
// 006636e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006636e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006636e8  8908                 mov dword ptr [eax], ecx
// 006636ea  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
