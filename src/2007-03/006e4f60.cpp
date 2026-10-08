// roc 2007-03 006e4f60  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e4f60
//
// 006e4f60  c701b4977d00         mov dword ptr [ecx], 0x7d97b4
// 006e4f66  e985afffff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
