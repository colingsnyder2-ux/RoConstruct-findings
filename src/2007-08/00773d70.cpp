// roc 2007-08 00773d70  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773d70
//
// 00773d70  681c587b00           push 0x7b581c
// 00773d75  6824587b00           push 0x7b5824
// 00773d7a  b988598c00           mov ecx, 0x8c5988
// 00773d7f  e8ac3ae3ff           call 0x5a7830
// 00773d84  6870b47700           push 0x77b470
// 00773d89  e895cfebff           call 0x630d23
// 00773d8e  59                   pop ecx
// 00773d8f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Climbing@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
