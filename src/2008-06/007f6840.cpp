// roc 2008-06 007f6840  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6840
//
// 007f6840  e81ba0dcff           call 0x5c0860
// 007f6845  68b4d88300           push 0x83d8b4
// 007f684a  50                   push eax
// 007f684b  b97ca39700           mov ecx, 0x97a37c
// 007f6850  e85b52d7ff           call 0x56bab0
// 007f6855  6860f67f00           push 0x7ff660
// 007f685a  c7057ca3970080d78300 mov dword ptr [0x97a37c], 0x83d780
// 007f6864  e846afeaff           call 0x6a17af
// 007f6869  59                   pop ecx
// 007f686a  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Died@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXXZ@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
