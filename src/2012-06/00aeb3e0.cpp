// from server: 100% by auto
// roc 2012-06 00aeb3e0  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb3e0
//
// 00aeb3e0  b954a2e100           mov ecx, 0xe1a254
// 00aeb3e5  ff158447b200         call dword ptr [0xb24784]
// 00aeb3eb  68e024b100           push 0xb124e0
// 00aeb3f0  e8007ee9ff           call 0x9831f5
// 00aeb3f5  59                   pop ecx
// 00aeb3f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
