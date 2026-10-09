// roc 2008-06 007f6f10  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6f10
//
// 007f6f10  6a05                 push 5
// 007f6f12  6890010000           push 0x190
// 007f6f17  68ac298300           push 0x8329ac
// 007f6f1c  6888fc8300           push 0x83fc88
// 007f6f21  b958ad9700           mov ecx, 0x97ad58
// 007f6f26  e8d543dfff           call 0x5eb300
// 007f6f2b  6890fa7f00           push 0x7ffa90
// 007f6f30  e87aa8eaff           call 0x6a17af
// 007f6f35  59                   pop ecx
// 007f6f36  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyBk@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
