// roc 2012-06 00aeb9d0  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb9d0
//
// 00aeb9d0  b9c8c2e100           mov ecx, 0xe1c2c8
// 00aeb9d5  ff15042fb200         call dword ptr [0xb22f04]
// 00aeb9db  68302ab100           push 0xb12a30
// 00aeb9e0  e81078e9ff           call 0x9831f5
// 00aeb9e5  59                   pop ecx
// 00aeb9e6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
