// roc 2007-03 00774590  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774590
//
// 00774590  e83b3ee1ff           call 0x5883d0
// 00774595  68f4587b00           push 0x7b58f4
// 0077459a  50                   push eax
// 0077459b  b9a0f08b00           mov ecx, 0x8bf0a0
// 007745a0  e88bbddfff           call 0x570330
// 007745a5  6800af7700           push 0x77af00
// 007745aa  c705a0f08b0070587b00 mov dword ptr [0x8bf0a0], 0x7b5870
// 007745b4  e8faabeaff           call 0x61f1b3
// 007745b9  59                   pop ecx
// 007745ba  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_Died@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AXXZ@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
