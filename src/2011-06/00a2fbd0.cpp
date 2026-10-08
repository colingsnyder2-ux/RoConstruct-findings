// from server: 100% by auto
// roc 2011-06 00a2fbd0  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fbd0
//
// 00a2fbd0  b940f0d100           mov ecx, 0xd1f040
// 00a2fbd5  ff152811a400         call dword ptr [0xa41128]
// 00a2fbdb  68e0fda300           push 0xa3fde0
// 00a2fbe0  e878b5ddff           call 0x80b15d
// 00a2fbe5  59                   pop ecx
// 00a2fbe6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
