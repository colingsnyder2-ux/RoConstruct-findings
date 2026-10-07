// roc 2009-06 0088d4c0  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088d4c0
//
// 0088d4c0  b9e8b9a400           mov ecx, 0xa4b9e8
// 0088d4c5  ff15c0e48900         call dword ptr [0x89e4c0]
// 0088d4cb  68b09f8900           push 0x899fb0
// 0088d4d0  e826c6e8ff           call 0x719afb
// 0088d4d5  59                   pop ecx
// 0088d4d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
