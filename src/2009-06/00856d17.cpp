// from server: 100% by auto
// roc 2009-06 00856d17  unit: seg_00850000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00856d17
//
// 00856d17  68100b5700           push 0x570b10
// 00856d1c  6a06                 push 6
// 00856d1e  6a14                 push 0x14
// 00856d20  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00856d26  50                   push eax
// 00856d27  e84a2eecff           call 0x719b76
// 00856d2c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromFile@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@NW4DepthReadMode@12@MM@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
