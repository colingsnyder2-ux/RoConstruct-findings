// roc 2007-08 00773dd0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773dd0
//
// 00773dd0  6838587b00           push 0x7b5838
// 00773dd5  684c587b00           push 0x7b584c
// 00773dda  b9f0598c00           mov ecx, 0x8c59f0
// 00773ddf  e81c3be3ff           call 0x5a7900
// 00773de4  6890b47700           push 0x77b490
// 00773de9  e835cfebff           call 0x630d23
// 00773dee  59                   pop ecx
// 00773def  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_GettingUp@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
