// roc 2007-03 006ece30  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ece30
//
// 006ece30  c701b4a17d00         mov dword ptr [ecx], 0x7da1b4
// 006ece36  e9b530ffff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
