// roc 2007-03 0066deb0  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066deb0
//
// 0066deb0  c7011cb27c00         mov dword ptr [ecx], 0x7cb21c
// 0066deb6  e9158b0700           jmp 0x6e69d0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
