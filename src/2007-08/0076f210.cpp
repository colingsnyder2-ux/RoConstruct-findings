// roc 2007-08 0076f210  unit: seg_00760000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f210
//
// 0076f210  68c8bd7900           push 0x79bdc8
// 0076f215  6850be7900           push 0x79be50
// 0076f21a  b950e28b00           mov ecx, 0x8be250
// 0076f21f  e8cc75d2ff           call 0x4967f0
// 0076f224  68e0857700           push 0x7785e0
// 0076f229  e8f51aecff           call 0x630d23
// 0076f22e  59                   pop ecx
// 0076f22f  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Eevent_PlayerRemoving@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
