// roc 2007-03 005abd60  unit: seg_005a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abd60
//
// 005abd60  8b4908               mov ecx, dword ptr [ecx + 8]
// 005abd63  e9980b0400           jmp 0x5ec900
// library rbxgs/v8world\Assembly.cpp (function ?calcShouldSleep@Assembly@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
