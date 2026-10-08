// roc 2007-03 00775430  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775430
//
// 00775430  e86bc7e5ff           call 0x5d1ba0
// 00775435  68b4bd7b00           push 0x7bbdb4
// 0077543a  50                   push eax
// 0077543b  b930008c00           mov ecx, 0x8c0030
// 00775440  e8ebaedfff           call 0x570330
// 00775445  68b0b67700           push 0x77b6b0
// 0077544a  c70530008c0040ba7b00 mov dword ptr [0x8c0030], 0x7bba40
// 00775454  e85a9deaff           call 0x61f1b3
// 00775459  59                   pop ecx
// 0077545a  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Deactivated@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
