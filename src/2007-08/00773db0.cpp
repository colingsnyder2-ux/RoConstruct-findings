// roc 2007-08 00773db0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773db0
//
// 00773db0  6838587b00           push 0x7b5838
// 00773db5  6840587b00           push 0x7b5840
// 00773dba  b970588c00           mov ecx, 0x8c5870
// 00773dbf  e83c3be3ff           call 0x5a7900
// 00773dc4  6880b47700           push 0x77b480
// 00773dc9  e855cfebff           call 0x630d23
// 00773dce  59                   pop ecx
// 00773dcf  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??__E?event_FreeFalling@Humanoid@RBX@@2V?$SignalDesc@VHumanoid@RBX@@$$A6AX_N@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
