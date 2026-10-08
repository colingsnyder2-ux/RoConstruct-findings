// roc 2007-03 006e1790  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e1790
//
// 006e1790  c701a48c7d00         mov dword ptr [ecx], 0x7d8ca4
// 006e1796  e955e7ffff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
