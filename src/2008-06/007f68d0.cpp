// roc 2008-06 007f68d0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f68d0
//
// 007f68d0  68e0d88300           push 0x83d8e0
// 007f68d5  68e8d88300           push 0x83d8e8
// 007f68da  b97ca49700           mov ecx, 0x97a47c
// 007f68df  e84c44deff           call 0x5dad30
// 007f68e4  6880f47f00           push 0x7ff480
// 007f68e9  e8c1aeeaff           call 0x6a17af
// 007f68ee  59                   pop ecx
// 007f68ef  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_FreeFalling@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
