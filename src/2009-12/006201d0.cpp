// roc 2009-12 006201d0  unit: seg_00620000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006201d0
//
// 006201d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006201d4  c70000000000         mov dword ptr [eax], 0
// 006201da  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
