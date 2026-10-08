// roc 2009-12 00932d30  unit: seg_00930000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00932d30
//
// 00932d30  68e0fa5e00           push 0x5efae0
// 00932d35  6a06                 push 6
// 00932d37  6a14                 push 0x14
// 00932d39  8d853cfeffff         lea eax, [ebp - 0x1c4]
// 00932d3f  50                   push eax
// 00932d40  e85f1cecff           call 0x7f49a4
// 00932d45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function __unwindfunclet$?fromTwoFiles@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
