// from server: 100% by auto
// roc 2012-06 00af5480  unit: seg_00af0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af5480
//
// 00af5480  b95cf4e200           mov ecx, 0xe2f45c
// 00af5485  ff155426b200         call dword ptr [0xb22654]
// 00af548b  68006ab100           push 0xb16a00
// 00af5490  e860dde8ff           call 0x9831f5
// 00af5495  59                   pop ecx
// 00af5496  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
