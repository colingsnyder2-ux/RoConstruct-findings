// roc 2008-06 007f68f0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f68f0
//
// 007f68f0  68e0d88300           push 0x83d8e0
// 007f68f5  68f4d88300           push 0x83d8f4
// 007f68fa  b930a69700           mov ecx, 0x97a630
// 007f68ff  e82c44deff           call 0x5dad30
// 007f6904  68c0f47f00           push 0x7ff4c0
// 007f6909  e8a1aeeaff           call 0x6a17af
// 007f690e  59                   pop ecx
// 007f690f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_GettingUp@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
