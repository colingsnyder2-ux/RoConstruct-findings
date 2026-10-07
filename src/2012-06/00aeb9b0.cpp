// roc 2012-06 00aeb9b0  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb9b0
//
// 00aeb9b0  b918c3e100           mov ecx, 0xe1c318
// 00aeb9b5  ff150831b200         call dword ptr [0xb23108]
// 00aeb9bb  68202ab100           push 0xb12a20
// 00aeb9c0  e83078e9ff           call 0x9831f5
// 00aeb9c5  59                   pop ecx
// 00aeb9c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
