// roc 2007-03 00430300  unit: seg_00430000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00430300
//
// 00430300  8b09                 mov ecx, dword ptr [ecx]
// 00430302  85c9                 test ecx, ecx
// 00430304  7405                 je 0x43030b
// 00430306  e967e31e00           jmp 0x61e672
// 0043030b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
