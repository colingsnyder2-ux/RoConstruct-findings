// from server: 100% by auto
// roc 2012-06 00afbad0  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00afbad0
//
// 00afbad0  b9dc75e300           mov ecx, 0xe375dc
// 00afbad5  ff155426b200         call dword ptr [0xb22654]
// 00afbadb  68508cb100           push 0xb18c50
// 00afbae0  e81077e8ff           call 0x9831f5
// 00afbae5  59                   pop ecx
// 00afbae6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
