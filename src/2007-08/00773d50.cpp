// roc 2007-08 00773d50  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773d50
//
// 00773d50  681c587b00           push 0x7b581c
// 00773d55  6814587b00           push 0x7b5814
// 00773d5a  b920598c00           mov ecx, 0x8c5920
// 00773d5f  e8cc3ae3ff           call 0x5a7830
// 00773d64  68c0b47700           push 0x77b4c0
// 00773d69  e8b5cfebff           call 0x630d23
// 00773d6e  59                   pop ecx
// 00773d6f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Running@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
