// roc 2009-06 00856e10  unit: seg_00850000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00856e10
//
// 00856e10  68100b5700           push 0x570b10
// 00856e15  6a06                 push 6
// 00856e17  6a14                 push 0x14
// 00856e19  8d853cfeffff         lea eax, [ebp - 0x1c4]
// 00856e1f  50                   push eax
// 00856e20  e8512decff           call 0x719b76
// 00856e25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromTwoFiles@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
