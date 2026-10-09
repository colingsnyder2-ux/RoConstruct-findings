// roc 2008-06 007f6ee0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6ee0
//
// 007f6ee0  6a05                 push 5
// 007f6ee2  6870010000           push 0x170
// 007f6ee7  68ac298300           push 0x8329ac
// 007f6eec  687cfc8300           push 0x83fc7c
// 007f6ef1  b9c8ad9700           mov ecx, 0x97adc8
// 007f6ef6  e80544dfff           call 0x5eb300
// 007f6efb  6870fa7f00           push 0x7ffa70
// 007f6f00  e8aaa8eaff           call 0x6a17af
// 007f6f05  59                   pop ecx
// 007f6f06  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyRt@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
