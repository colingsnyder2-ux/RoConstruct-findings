// from server: 100% by auto
// roc 2012-06 00af7f90  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af7f90
//
// 00af7f90  b9781fe300           mov ecx, 0xe31f78
// 00af7f95  ff155426b200         call dword ptr [0xb22654]
// 00af7f9b  682076b100           push 0xb17620
// 00af7fa0  e850b2e8ff           call 0x9831f5
// 00af7fa5  59                   pop ecx
// 00af7fa6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
