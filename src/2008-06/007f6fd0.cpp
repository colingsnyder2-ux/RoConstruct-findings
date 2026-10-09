// roc 2008-06 007f6fd0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6fd0
//
// 007f6fd0  6a05                 push 5
// 007f6fd2  68f0010000           push 0x1f0
// 007f6fd7  68ac298300           push 0x8329ac
// 007f6fdc  68b8fc8300           push 0x83fcb8
// 007f6fe1  b920ad9700           mov ecx, 0x97ad20
// 007f6fe6  e8b544dfff           call 0x5eb4a0
// 007f6feb  6830fb7f00           push 0x7ffb30
// 007f6ff0  e8baa7eaff           call 0x6a17af
// 007f6ff5  59                   pop ecx
// 007f6ff6  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_CelestialBodiesShown@Sky@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
