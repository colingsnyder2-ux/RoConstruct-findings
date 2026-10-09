// roc 2008-06 007f6930  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6930
//
// 007f6930  68e0d88300           push 0x83d8e0
// 007f6935  680cd98300           push 0x83d90c
// 007f693a  b9f4a29700           mov ecx, 0x97a2f4
// 007f693f  e8ec43deff           call 0x5dad30
// 007f6944  6840f57f00           push 0x7ff540
// 007f6949  e861aeeaff           call 0x6a17af
// 007f694e  59                   pop ecx
// 007f694f  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_FallingDown@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
