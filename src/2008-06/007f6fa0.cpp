// roc 2008-06 007f6fa0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6fa0
//
// 007f6fa0  6a05                 push 5
// 007f6fa2  68f4010000           push 0x1f4
// 007f6fa7  68ac298300           push 0x8329ac
// 007f6fac  68acfc8300           push 0x83fcac
// 007f6fb1  b974ad9700           mov ecx, 0x97ad74
// 007f6fb6  e81544dfff           call 0x5eb3d0
// 007f6fbb  6850fb7f00           push 0x7ffb50
// 007f6fc0  e8eaa7eaff           call 0x6a17af
// 007f6fc5  59                   pop ecx
// 007f6fc6  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_StarCount@Sky@RBX@@2V?$BoundProp@H$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
