// from server: 100% by auto
// roc 2012-06 00af7fe0  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af7fe0
//
// 00af7fe0  b92c20e300           mov ecx, 0xe3202c
// 00af7fe5  ff155426b200         call dword ptr [0xb22654]
// 00af7feb  68a076b100           push 0xb176a0
// 00af7ff0  e800b2e8ff           call 0x9831f5
// 00af7ff5  59                   pop ecx
// 00af7ff6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
