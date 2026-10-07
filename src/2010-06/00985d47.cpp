// roc 2010-06 00985d47  unit: seg_00980000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00985d47
//
// 00985d47  68e0395500           push 0x5539e0
// 00985d4c  6a06                 push 6
// 00985d4e  6a14                 push 0x14
// 00985d50  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00985d56  50                   push eax
// 00985d57  e8822de2ff           call 0x7a8ade
// 00985d5c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromFile@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@NW4DepthReadMode@12@MM@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
