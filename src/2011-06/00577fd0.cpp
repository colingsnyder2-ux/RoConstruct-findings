// from server: 100% by auto
// roc 2011-06 00577fd0  unit: seg_00570000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577fd0
//
// 00577fd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00577fd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577fd8  8908                 mov dword ptr [eax], ecx
// 00577fda  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
