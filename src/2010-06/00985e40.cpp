// roc 2010-06 00985e40  unit: seg_00980000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00985e40
//
// 00985e40  68e0395500           push 0x5539e0
// 00985e45  6a06                 push 6
// 00985e47  6a14                 push 0x14
// 00985e49  8d853cfeffff         lea eax, [ebp - 0x1c4]
// 00985e4f  50                   push eax
// 00985e50  e8892ce2ff           call 0x7a8ade
// 00985e55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromTwoFiles@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
