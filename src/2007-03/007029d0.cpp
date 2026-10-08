// roc 2007-03 007029d0  unit: seg_00700000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007029d0
//
// 007029d0  c70114d27d00         mov dword ptr [ecx], 0x7dd214
// 007029d6  e915d5fdff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
