// roc 2007-03 00775400  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775400
//
// 00775400  e89bc7e5ff           call 0x5d1ba0
// 00775405  68a8bd7b00           push 0x7bbda8
// 0077540a  50                   push eax
// 0077540b  b928018c00           mov ecx, 0x8c0128
// 00775410  e81bafdfff           call 0x570330
// 00775415  68a0b67700           push 0x77b6a0
// 0077541a  c70528018c0040ba7b00 mov dword ptr [0x8c0128], 0x7bba40
// 00775424  e88a9deaff           call 0x61f1b3
// 00775429  59                   pop ecx
// 0077542a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Activated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
