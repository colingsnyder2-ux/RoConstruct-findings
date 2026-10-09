// roc 2008-06 007f6870  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6870
//
// 007f6870  68c4d88300           push 0x83d8c4
// 007f6875  68bcd88300           push 0x83d8bc
// 007f687a  b904a59700           mov ecx, 0x97a504
// 007f687f  e8dc43deff           call 0x5dac60
// 007f6884  68d0f57f00           push 0x7ff5d0
// 007f6889  e821afeaff           call 0x6a17af
// 007f688e  59                   pop ecx
// 007f688f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Running@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
