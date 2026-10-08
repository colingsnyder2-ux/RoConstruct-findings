// from server: 100% by auto
// roc 2008-06 007ef840  unit: seg_007e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef840
//
// 007ef840  b9f0dc9600           mov ecx, 0x96dcf0
// 007ef845  ff15043f8000         call dword ptr [0x803f04]
// 007ef84b  68e0ad7f00           push 0x7fade0
// 007ef850  e85a1febff           call 0x6a17af
// 007ef855  59                   pop ecx
// 007ef856  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
