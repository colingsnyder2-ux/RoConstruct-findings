// roc 2007-03 005abd90  unit: seg_005a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abd90
//
// 005abd90  8b4908               mov ecx, dword ptr [ecx + 8]
// 005abd93  e9c80f0400           jmp 0x5ecd60
// library rbxgs/v8world\Assembly.cpp (function ?calcShouldSleep@Assembly@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
