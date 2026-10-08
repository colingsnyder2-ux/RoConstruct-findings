// from server: 100% by auto
// roc 2008-06 007c46e7  unit: seg_007c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007c46e7
//
// 007c46e7  6830e25000           push 0x50e230
// 007c46ec  6a06                 push 6
// 007c46ee  6a14                 push 0x14
// 007c46f0  8d85d4feffff         lea eax, [ebp - 0x12c]
// 007c46f6  50                   push eax
// 007c46f7  e85fcfedff           call 0x6a165b
// 007c46fc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromFile@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@NW4DepthReadMode@12@MM@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
