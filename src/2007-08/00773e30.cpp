// from server: 99% by colin
// roc 2007-08 00773df0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773df0
//
// 00773df0  6838587b00           push 0x7b5d70
// 00773df5  6858587b00           push 0x7b5d60
// 00773dfa  b980578c00           mov ecx, 0x8c5bec
// 00773dff  e8fc3ae3ff           call 0x5aed40
// 00773e04  68a0b47700           push 0x77b620
// 00773e09  e815cfebff           call 0x630d23
// 00773e0e  59                   pop ecx
// 00773e0f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_FallingDown@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp