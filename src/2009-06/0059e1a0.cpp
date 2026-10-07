// roc 2009-06 0059e1a0  unit: seg_00590000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e1a0
//
// 0059e1a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e1a4  c70000000000         mov dword ptr [eax], 0
// 0059e1aa  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
