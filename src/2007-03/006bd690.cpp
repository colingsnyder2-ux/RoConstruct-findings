// roc 2007-03 006bd690  unit: seg_006b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bd690
//
// 006bd690  c701e4527d00         mov dword ptr [ecx], 0x7d52e4
// 006bd696  e93fd40700           jmp 0x73aada
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
