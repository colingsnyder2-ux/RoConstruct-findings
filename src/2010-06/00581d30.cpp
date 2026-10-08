// from server: 100% by auto
// roc 2010-06 00581d30  unit: seg_00580000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581d30
//
// 00581d30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581d34  c70000000000         mov dword ptr [eax], 0
// 00581d3a  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
