// roc 2008-06 007f6e80  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6e80
//
// 007f6e80  6a05                 push 5
// 007f6e82  6830010000           push 0x130
// 007f6e87  68ac298300           push 0x8329ac
// 007f6e8c  6864fc8300           push 0x83fc64
// 007f6e91  b9acad9700           mov ecx, 0x97adac
// 007f6e96  e86544dfff           call 0x5eb300
// 007f6e9b  6810fb7f00           push 0x7ffb10
// 007f6ea0  e80aa9eaff           call 0x6a17af
// 007f6ea5  59                   pop ecx
// 007f6ea6  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyUp@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
