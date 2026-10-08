// roc 2007-08 00773d90  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773d90
//
// 00773d90  6838587b00           push 0x7b5838
// 00773d95  6830587b00           push 0x7b5830
// 00773d9a  b9cc598c00           mov ecx, 0x8c59cc
// 00773d9f  e85c3be3ff           call 0x5a7900
// 00773da4  68d0b47700           push 0x77b4d0
// 00773da9  e875cfebff           call 0x630d23
// 00773dae  59                   pop ecx
// 00773daf  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Jumping@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
