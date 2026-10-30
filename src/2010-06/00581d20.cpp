// from server: 100% by auto
// roc 2010-06 00581d20  unit: seg_00580000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581d20
//
// 00581d20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581d24  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581d28  8908                 mov dword ptr [eax], ecx
// 00581d2a  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
