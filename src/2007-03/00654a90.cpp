// roc 2007-03 00654a90  unit: seg_00650000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654a90
//
// 00654a90  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 00654a96  c3                   ret 
// library rbxgs-net/Players.cpp (function ?getUserID@Player@Network@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
