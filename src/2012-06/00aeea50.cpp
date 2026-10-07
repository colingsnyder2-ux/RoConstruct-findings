// roc 2012-06 00aeea50  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeea50
//
// 00aeea50  b9f425e200           mov ecx, 0xe225f4
// 00aeea55  ff155426b200         call dword ptr [0xb22654]
// 00aeea5b  68403cb100           push 0xb13c40
// 00aeea60  e89047e9ff           call 0x9831f5
// 00aeea65  59                   pop ecx
// 00aeea66  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
