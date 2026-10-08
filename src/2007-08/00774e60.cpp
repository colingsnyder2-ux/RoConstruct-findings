// roc 2007-08 00774e60  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774e60
//
// 00774e60  e8fbbee1ff           call 0x590d60
// 00774e65  6878b77b00           push 0x7bb778
// 00774e6a  50                   push eax
// 00774e6b  b9286a8c00           mov ecx, 0x8c6a28
// 00774e70  e89bb5dfff           call 0x570410
// 00774e75  6870bd7700           push 0x77bd70
// 00774e7a  c705286a8c003cb47b00 mov dword ptr [0x8c6a28], 0x7bb43c
// 00774e84  e89abeebff           call 0x630d23
// 00774e89  59                   pop ecx
// 00774e8a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Activated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
