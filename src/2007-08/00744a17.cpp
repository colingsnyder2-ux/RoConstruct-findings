// roc 2007-08 00744a17  unit: seg_00740000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00744a17
//
// 00744a17  68c0535000           push 0x5053c0
// 00744a1c  6a06                 push 6
// 00744a1e  6a14                 push 0x14
// 00744a20  8d857cfeffff         lea eax, [ebp - 0x184]
// 00744a26  50                   push eax
// 00744a27  e8cbc0eeff           call 0x630af7
// 00744a2c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromFile@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@NW4DepthReadMode@12@MM@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
