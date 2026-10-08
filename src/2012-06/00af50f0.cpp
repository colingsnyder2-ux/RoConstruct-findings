// from server: 100% by auto
// roc 2012-06 00af50f0  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af50f0
//
// 00af50f0  b988e1e200           mov ecx, 0xe2e188
// 00af50f5  ff155426b200         call dword ptr [0xb22654]
// 00af50fb  68b064b100           push 0xb164b0
// 00af5100  e8f0e0e8ff           call 0x9831f5
// 00af5105  59                   pop ecx
// 00af5106  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
