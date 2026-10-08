// from server: 100% by auto
// roc 2012-06 00af81b0  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af81b0
//
// 00af81b0  b9e820e300           mov ecx, 0xe320e8
// 00af81b5  ff155426b200         call dword ptr [0xb22654]
// 00af81bb  68b076b100           push 0xb176b0
// 00af81c0  e830b0e8ff           call 0x9831f5
// 00af81c5  59                   pop ecx
// 00af81c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
