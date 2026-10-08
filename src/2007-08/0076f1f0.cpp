// roc 2007-08 0076f1f0  unit: seg_00760000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f1f0
//
// 0076f1f0  68c8bd7900           push 0x79bdc8
// 0076f1f5  6844be7900           push 0x79be44
// 0076f1fa  b9f0e18b00           mov ecx, 0x8be1f0
// 0076f1ff  e8ec75d2ff           call 0x4967f0
// 0076f204  6880867700           push 0x778680
// 0076f209  e8151becff           call 0x630d23
// 0076f20e  59                   pop ecx
// 0076f20f  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Eevent_PlayerAdded@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
