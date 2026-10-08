// roc 2008-06 007f7960  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7960
//
// 007f7960  e8abbedcff           call 0x5c3810
// 007f7965  68801e8400           push 0x841e80
// 007f796a  50                   push eax
// 007f796b  b918b89700           mov ecx, 0x97b818
// 007f7970  e83b41d7ff           call 0x56bab0
// 007f7975  6850008000           push 0x800050
// 007f797a  c70518b89700501c8400 mov dword ptr [0x97b818], 0x841c50
// 007f7984  e8269eeaff           call 0x6a17af
// 007f7989  59                   pop ecx
// 007f798a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Activated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
