// roc 2008-06 007f6890  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6890
//
// 007f6890  68c4d88300           push 0x83d8c4
// 007f6895  68ccd88300           push 0x83d8cc
// 007f689a  b98ca59700           mov ecx, 0x97a58c
// 007f689f  e8bc43deff           call 0x5dac60
// 007f68a4  6840f47f00           push 0x7ff440
// 007f68a9  e801afeaff           call 0x6a17af
// 007f68ae  59                   pop ecx
// 007f68af  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Climbing@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
