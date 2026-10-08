// roc 2007-08 00773d20  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773d20
//
// 00773d20  e89ba8e1ff           call 0x58e5c0
// 00773d25  680c587b00           push 0x7b580c
// 00773d2a  50                   push eax
// 00773d2b  b9c4578c00           mov ecx, 0x8c57c4
// 00773d30  e8dbc6dfff           call 0x570410
// 00773d35  68f0b47700           push 0x77b4f0
// 00773d3a  c705c4578c002c577b00 mov dword ptr [0x8c57c4], 0x7b572c
// 00773d44  e8dacfebff           call 0x630d23
// 00773d49  59                   pop ecx
// 00773d4a  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Died@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXXZ@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
