// roc 2007-08 00527cf0  unit: G3D::Line  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527cf0
//
// 00527cf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527cf4  c70000000000         mov dword ptr [eax], 0
// 00527cfa  c3                   ret 
// library jpeg-6b/jdsample.c (function _noop_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
