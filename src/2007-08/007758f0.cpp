// from server: 99% by colin
// roc 2007-08 00773e10  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773e10
//
// 00773e10  6838587b00           push 0x79b670
// 00773e15  6864587b00           push 0x7a67a8
// 00773e1a  b964598c00           mov ecx, 0x8c7ee0
// 00773e1f  e8dc3ae3ff           call 0x5f5170
// 00773e24  68b0b47700           push 0x77c820
// 00773e29  e8f5ceebff           call 0x630d23
// 00773e2e  59                   pop ecx
// 00773e2f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Seated@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp