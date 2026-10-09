// roc 2008-06 007f6f40  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6f40
//
// 007f6f40  6a05                 push 5
// 007f6f42  68b0010000           push 0x1b0
// 007f6f47  68ac298300           push 0x8329ac
// 007f6f4c  6894fc8300           push 0x83fc94
// 007f6f51  b9e4ad9700           mov ecx, 0x97ade4
// 007f6f56  e8a543dfff           call 0x5eb300
// 007f6f5b  68b0fa7f00           push 0x7ffab0
// 007f6f60  e84aa8eaff           call 0x6a17af
// 007f6f65  59                   pop ecx
// 007f6f66  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyFt@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
