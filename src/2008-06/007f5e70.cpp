// roc 2008-06 007f5e70  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5e70
//
// 007f5e70  6810b78300           push 0x83b710
// 007f5e75  6804b78300           push 0x83b704
// 007f5e7a  b9189d9700           mov ecx, 0x979d18
// 007f5e7f  e8bcacddff           call 0x5d0b40
// 007f5e84  68b0ef7f00           push 0x7fefb0
// 007f5e89  e821b9eaff           call 0x6a17af
// 007f5e8e  59                   pop ecx
// 007f5e8f  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_Selected@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
