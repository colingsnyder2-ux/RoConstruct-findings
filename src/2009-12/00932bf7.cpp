// roc 2009-12 00932bf7  unit: seg_00930000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00932bf7
//
// 00932bf7  68e0fa5e00           push 0x5efae0
// 00932bfc  6a06                 push 6
// 00932bfe  6a14                 push 0x14
// 00932c00  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00932c06  50                   push eax
// 00932c07  e8981decff           call 0x7f49a4
// 00932c0c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromFile@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@NW4DepthReadMode@12@MM@Z$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
