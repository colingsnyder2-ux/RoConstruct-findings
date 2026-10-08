// from server: 100% by auto
// roc 2009-06 008927d0  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008927d0
//
// 008927d0  b9e403a500           mov ecx, 0xa503e4
// 008927d5  ff1568078a00         call dword ptr [0x8a0768]
// 008927db  68a0d18900           push 0x89d1a0
// 008927e0  e81673e8ff           call 0x719afb
// 008927e5  59                   pop ecx
// 008927e6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
