// roc 2008-06 007f68b0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f68b0
//
// 007f68b0  68e0d88300           push 0x83d8e0
// 007f68b5  68d8d88300           push 0x83d8d8
// 007f68ba  b9fca59700           mov ecx, 0x97a5fc
// 007f68bf  e86c44deff           call 0x5dad30
// 007f68c4  6810f67f00           push 0x7ff610
// 007f68c9  e8e1aeeaff           call 0x6a17af
// 007f68ce  59                   pop ecx
// 007f68cf  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Jumping@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
