// roc 2008-06 007f6eb0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6eb0
//
// 007f6eb0  6a05                 push 5
// 007f6eb2  6850010000           push 0x150
// 007f6eb7  68ac298300           push 0x8329ac
// 007f6ebc  6870fc8300           push 0x83fc70
// 007f6ec1  b93cad9700           mov ecx, 0x97ad3c
// 007f6ec6  e83544dfff           call 0x5eb300
// 007f6ecb  68f0fa7f00           push 0x7ffaf0
// 007f6ed0  e8daa8eaff           call 0x6a17af
// 007f6ed5  59                   pop ecx
// 007f6ed6  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyLf@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
