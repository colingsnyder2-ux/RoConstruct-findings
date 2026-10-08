// from server: 100% by auto
// roc 2012-06 006636f0  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006636f0
//
// 006636f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006636f4  c70000000000         mov dword ptr [eax], 0
// 006636fa  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
