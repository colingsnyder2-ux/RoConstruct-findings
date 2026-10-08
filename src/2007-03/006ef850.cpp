// roc 2007-03 006ef850  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ef850
//
// 006ef850  c70124a87d00         mov dword ptr [ecx], 0x7da824
// 006ef856  e995feffff           jmp 0x6ef6f0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
