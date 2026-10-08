// roc 2007-08 00774e90  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774e90
//
// 00774e90  e8cbbee1ff           call 0x590d60
// 00774e95  6884b77b00           push 0x7bb784
// 00774e9a  50                   push eax
// 00774e9b  b914698c00           mov ecx, 0x8c6914
// 00774ea0  e86bb5dfff           call 0x570410
// 00774ea5  6880bd7700           push 0x77bd80
// 00774eaa  c70514698c003cb47b00 mov dword ptr [0x8c6914], 0x7bb43c
// 00774eb4  e86abeebff           call 0x630d23
// 00774eb9  59                   pop ecx
// 00774eba  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Deactivated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
