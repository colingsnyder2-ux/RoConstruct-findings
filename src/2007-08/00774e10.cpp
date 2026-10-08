// roc 2007-08 00774e10  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774e10
//
// 00774e10  68e42c7b00           push 0x7b2ce4
// 00774e15  6860b77b00           push 0x7bb760
// 00774e1a  b978698c00           mov ecx, 0x8c6978
// 00774e1f  e8dcf1e5ff           call 0x5d4000
// 00774e24  68a0bd7700           push 0x77bda0
// 00774e29  e8f5beebff           call 0x630d23
// 00774e2e  59                   pop ecx
// 00774e2f  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Equipped@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
