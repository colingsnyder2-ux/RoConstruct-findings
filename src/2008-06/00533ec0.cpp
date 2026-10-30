// from server: 100% by auto
// roc 2008-06 00533ec0  unit: seg_00530000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533ec0
//
// 00533ec0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533ec4  c70000000000         mov dword ptr [eax], 0
// 00533eca  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
