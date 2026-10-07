// roc 2009-06 008927b0  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008927b0
//
// 008927b0  b98403a500           mov ecx, 0xa50384
// 008927b5  ff1568078a00         call dword ptr [0x8a0768]
// 008927bb  6890d18900           push 0x89d190
// 008927c0  e83673e8ff           call 0x719afb
// 008927c5  59                   pop ecx
// 008927c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
