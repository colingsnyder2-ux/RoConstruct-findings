// roc 2008-06 007f6950  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6950
//
// 007f6950  68e0d88300           push 0x83d8e0
// 007f6955  6818d98300           push 0x83d918
// 007f695a  b958a59700           mov ecx, 0x97a558
// 007f695f  e8cc43deff           call 0x5dad30
// 007f6964  6880f57f00           push 0x7ff580
// 007f6969  e841aeeaff           call 0x6a17af
// 007f696e  59                   pop ecx
// 007f696f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Seated@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
