// roc 2008-06 007f2bb0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2bb0
//
// 007f2bb0  68f4f08000           push 0x80f0f4
// 007f2bb5  6838da8200           push 0x82da38
// 007f2bba  b9483f9700           mov ecx, 0x973f48
// 007f2bbf  e81c70d6ff           call 0x559be0
// 007f2bc4  6840cb7f00           push 0x7fcb40
// 007f2bc9  e8e1ebeaff           call 0x6a17af
// 007f2bce  59                   pop ecx
// 007f2bcf  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_propertyChanged@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXPBVPropertyDescriptor@Reflection@2@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
