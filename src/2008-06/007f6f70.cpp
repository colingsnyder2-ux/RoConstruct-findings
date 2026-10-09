// roc 2008-06 007f6f70  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6f70
//
// 007f6f70  6a05                 push 5
// 007f6f72  68d0010000           push 0x1d0
// 007f6f77  68ac298300           push 0x8329ac
// 007f6f7c  68a0fc8300           push 0x83fca0
// 007f6f81  b990ad9700           mov ecx, 0x97ad90
// 007f6f86  e87543dfff           call 0x5eb300
// 007f6f8b  68d0fa7f00           push 0x7ffad0
// 007f6f90  e81aa8eaff           call 0x6a17af
// 007f6f95  59                   pop ecx
// 007f6f96  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??__E?prop_SkyDn@Sky@RBX@@2V?$BoundProp@VTextureId@RBX@@$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
