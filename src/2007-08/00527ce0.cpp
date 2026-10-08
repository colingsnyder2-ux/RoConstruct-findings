// from server: 100% by auto
// roc 2007-08 00527ce0  unit: G3D::Line  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527ce0
//
// 00527ce0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527ce4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00527ce8  8908                 mov dword ptr [eax], ecx
// 00527cea  c3                   ret 
// library jpeg-6b/jdsample.c (function _fullsize_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
