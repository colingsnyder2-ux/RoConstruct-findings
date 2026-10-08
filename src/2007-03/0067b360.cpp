// roc 2007-03 0067b360  unit: seg_00670000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b360
//
// 0067b360  8b4908               mov ecx, dword ptr [ecx + 8]
// 0067b363  e95836faff           jmp 0x61e9c0
// library rbxgs/v8world\Assembly.cpp (function ?calcShouldSleep@Assembly@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
