// roc 2008-06 007f7930  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7930
//
// 007f7930  e8dbbedcff           call 0x5c3810
// 007f7935  68741e8400           push 0x841e74
// 007f793a  50                   push eax
// 007f793b  b908b79700           mov ecx, 0x97b708
// 007f7940  e86b41d7ff           call 0x56bab0
// 007f7945  68d0008000           push 0x8000d0
// 007f794a  c70508b79700501c8400 mov dword ptr [0x97b708], 0x841c50
// 007f7954  e8569eeaff           call 0x6a17af
// 007f7959  59                   pop ecx
// 007f795a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Unequipped@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
