// roc 2007-03 0068c7c0  unit: seg_00680000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c7c0
//
// 0068c7c0  c70110007d00         mov dword ptr [ecx], 0x7d0010
// 0068c7c6  e925370500           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
