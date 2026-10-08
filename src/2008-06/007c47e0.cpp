// from server: 100% by auto
// roc 2008-06 007c47e0  unit: seg_007c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c47e0
//
// 007c47e0  6830e25000           push 0x50e230
// 007c47e5  6a06                 push 6
// 007c47e7  6a14                 push 0x14
// 007c47e9  8d853cfeffff         lea eax, [ebp - 0x1c4]
// 007c47ef  50                   push eax
// 007c47f0  e866ceedff           call 0x6a165b
// 007c47f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromTwoFiles@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
