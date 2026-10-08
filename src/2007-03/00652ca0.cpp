// roc 2007-03 00652ca0  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00652ca0
//
// 00652ca0  c70144767c00         mov dword ptr [ecx], 0x7c7644
// 00652ca6  e965e7ffff           jmp 0x651410
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
