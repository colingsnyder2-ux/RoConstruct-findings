// roc 2008-06 007f5e90  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5e90
//
// 007f5e90  e88ba5ddff           call 0x5d0420
// 007f5e95  6818b78300           push 0x83b718
// 007f5e9a  50                   push eax
// 007f5e9b  b9689d9700           mov ecx, 0x979d68
// 007f5ea0  e80b5cd7ff           call 0x56bab0
// 007f5ea5  6870ef7f00           push 0x7fef70
// 007f5eaa  c705689d97005cb28300 mov dword ptr [0x979d68], 0x83b25c
// 007f5eb4  e8f6b8eaff           call 0x6a17af
// 007f5eb9  59                   pop ecx
// 007f5eba  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_Deselected@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
